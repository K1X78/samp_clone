#include "pawn/format_cells.hpp"
#include <algorithm>
#include <bit>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <limits>

namespace samp::pawn {

// Callers473110/473140 use46fd00's4095-byte output bound. Numeric helpers
// 46d4e0/46d580/46d600 pad before digits;46d2a0/46d320 pad strings on the right.
// A minus flag is consumed but does not enable C printf left justification.
// Official: FUN_0046d680 @ 0x0046d680 (samp-server.exe)
std::string format_cells(samp::amx::Amx* state,const samp::amx::cell* format,
                         std::span<const samp::amx::cell> arguments) {
    using samp::amx::cell;
    std::string result;
    if(!state || !state->base || !format) return result;
    const auto* base=static_cast<const std::uint8_t*>(state->base);
    std::int32_t data_offset=0;std::memcpy(&data_offset,base+0x10,4);
    const auto* data=base+data_offset;
    const auto address=[&](cell offset)->const cell* {
        if(offset<0 || std::int64_t(offset)+4>state->stp ||
           (offset>=state->hea && offset<state->stk)) return nullptr;
        return reinterpret_cast<const cell*>(data+offset);
    };
    const auto append=[&](std::string_view text) {
        result.append(text.substr(0,4095-result.size()));
    };
    const auto decimal_width=[&](const cell*& cursor) {
        std::uint32_t number=0;
        for(unsigned count=0;count<11 && *cursor &&
            static_cast<unsigned char>(*cursor)>='0' && static_cast<unsigned char>(*cursor)<='9';++count,++cursor)
            number=number*10u+static_cast<unsigned char>(*cursor)-'0';
        return std::bit_cast<cell>(number);
    };
    std::size_t argument=0;
    const auto next=[&]()->const cell* {
        return argument<arguments.size()?address(arguments[argument++]):nullptr;
    };
    const auto integer=[&](cell value,unsigned radix,int width,bool zero) {
        std::string digits,prefix;
        std::uint32_t magnitude=static_cast<std::uint32_t>(value);
        if(radix==10 && value<0) {
            prefix="-";magnitude=0u-magnitude;
            // 46d4e0 negates INT_MIN, then signed468dc0 yields only '-'.
            if(value==std::numeric_limits<cell>::min()) digits="-";
        }
        if(digits.empty()) {
            do {digits.push_back("0123456789ABCDEF"[magnitude%radix]);magnitude/=radix;} while(magnitude);
            std::reverse(digits.begin(),digits.end());
        }
        const auto padding=width>static_cast<int>(digits.size())?
            std::min(width-static_cast<int>(digits.size()),64):0;
        prefix.append(static_cast<std::size_t>(padding),zero?'0':' ');
        prefix+=digits;
        // The decimal sign does not decrement the helper's64-byte budget.
        prefix.resize(std::min(prefix.size(),std::size_t{64}+(radix==10 && value<0?1:0)));
        return prefix;
    };
    const auto floating=[&](cell bits,int width,int precision,bool zero) {
        const float input=std::bit_cast<float>(bits);
        if(std::isnan(input)) return std::string("NaN");
        long double value=input;
        const bool negative=value<0;if(negative) value=-value;
        const auto convert=[](long double number)->cell {
            // The shipped _ftol2 returns64 bits; the formatter keeps EAX.
            // Large values wrap at32 bits rather than using an int32 cast.
            if(!std::isfinite(number) || number>=9223372036854775808.0L || number<-9223372036854775808.0L)
                return 0; // low32 bits of x87's indefinite INT64_MIN
            return std::bit_cast<cell>(static_cast<std::uint32_t>(static_cast<std::int64_t>(number)));
        };
        cell whole=convert(value),previous=whole;
        std::string backwards;
        do {backwards.push_back(static_cast<char>('0'+whole%10));whole/=10;} while(whole && backwards.size()<65);
        if(negative) backwards.push_back('-');
        std::reverse(backwards.begin(),backwards.end());
        std::string output;
        if(width>static_cast<int>(backwards.size())) output.assign(
            std::min(width-static_cast<int>(backwards.size()),64),zero?'0':' ');
        output+=backwards;output.resize(std::min(output.size(),std::size_t{64}));
        if(precision<0) precision=6;
        if(precision>0 && output.size()<64) {
            output.push_back('.');
            for(int digit=0;digit<std::min(precision,65) && output.size()<64;++digit) {
                value=(value-previous)*10.0L;previous=convert(value);
                output.push_back(static_cast<char>('0'+previous%10));
            }
        }
        return output;
    };
    for(auto* cursor=format;*cursor && result.size()<4095;++cursor) {
        auto character=static_cast<char>(*cursor);
        if(character!='%') {append(std::string_view(&character,1));continue;}
        ++cursor;
        if(!*cursor) {append("%");break;}
        bool zero=false;
        while(*cursor=='0' || *cursor=='-') {if(*cursor=='0') zero=true;++cursor;}
        int width=0,precision=-1;
        if(*cursor=='*') {const auto* value=next();width=value?*value:0;++cursor;}
        else if(*cursor>='0' && *cursor<='9') width=decimal_width(cursor);
        if(*cursor=='.') {
            ++cursor;
            if(*cursor=='*') {const auto* value=next();precision=value?*value:-1;++cursor;}
            else if(*cursor>='0' && *cursor<='9') precision=decimal_width(cursor);
        }
        if(!*cursor) {append("%");break;}
        character=static_cast<char>(*cursor);
        if(character=='%') {append("%");continue;}
        if(character!='d' && character!='i' && character!='x' && character!='h' &&
           character!='b' && character!='f' && character!='s' && character!='q' && character!='c') {
            append(std::string_view(&character,1));continue;
        }
        const auto* value=next();if(!value) continue;
        if(character=='c') {const char byte=static_cast<char>(*value);append(std::string_view(&byte,1));}
        else if(character=='s' || character=='q') {
            std::string text;
            const auto offset=reinterpret_cast<const std::uint8_t*>(value)-data;
            const auto cells=static_cast<std::size_t>((state->stp-offset)/4);
            const bool packed=character=='q' && static_cast<std::uint32_t>(*value)>=0x1000000u;
            bool ended=false;
            for(std::size_t index=0;index<cells && !ended && text.size()<8192;++index) {
                const auto word=static_cast<std::uint32_t>(value[index]);
                if(!word) break;
                if(packed) {
                    for(int shift=24;shift>=0;shift-=8) {
                        const char byte=static_cast<char>(word>>shift);
                        if(!byte) {ended=true;break;}
                        text.push_back(byte);
                    }
                } else text.push_back(static_cast<char>(word));
            }
            if(character=='q') {
                // 46d8f4 skips SQLite and padding for an empty quoted string.
                if(text.empty()) continue;
                std::string escaped;
                for(const char byte:text) {escaped.push_back(byte);if(byte=='\'') escaped.push_back(byte);}
                text=std::move(escaped);
            }
            if(precision>=0 && text.size()>static_cast<std::size_t>(precision)) text.resize(precision);
            const auto length=text.size();append(text);
            if(width>static_cast<int>(length)) append(std::string(
                std::min<std::size_t>(width-length,4095-result.size()),' '));
        } else if(character=='f') append(floating(*value,width,precision,zero));
        else append(integer(*value,character=='x' || character=='h'?16u:character=='b'?2u:10u,width,zero));
    }
    return result;
}
}
