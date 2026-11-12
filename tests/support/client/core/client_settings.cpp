#include "samp/client/client_settings.hpp"
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>

namespace samp::client {

// source adapter only; no established separate native entry
// Original load65cf0 and parser65c60 accept '=' assignments, semicolon
// comments, bracket headers, quoted strings and the native numeric types.
bool ClientSettings::load() {
    std::ifstream input(file);if(!input) return false;
    std::vector<ClientSetting> loaded=entries;
    bool changed=false;
    std::string line;
    while(std::getline(input,line)) {
        auto at=line.find_first_not_of(" \t");
        if(at==std::string::npos || line[at]==';' || line[at]=='[') continue;
        const auto end=line.find_first_of(" =\t;\r\n",at);
        if(end==std::string::npos || end==at) continue;
        std::string name=line.substr(at,end-at);
        at=line.find_first_not_of(" \t",end);
        if(at==std::string::npos || line[at]!='=') continue;
        at=line.find_first_not_of(" \t",at+1);if(at==std::string::npos) continue;
        auto value=line.substr(at);const auto last=value.find_last_not_of(" \t\r");
        if(last==std::string::npos) continue;value.resize(last+1);
        std::transform(name.begin(),name.end(),name.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
        if(name.size()>40) continue;
        int type=1;
        if(value.front()=='"' && value.size()>=2 && value.back()=='"') {type=2;value=value.substr(1,value.size()-2);}
        else if(value.find('.')!=std::string::npos) {
            type=3;char formatted[64];std::snprintf(formatted,sizeof(formatted),"%f",static_cast<double>(std::strtof(value.c_str(),nullptr)));value=formatted;
        } else value=std::to_string(static_cast<std::int32_t>(std::strtol(value.c_str(),nullptr,10)));
        const auto existing=std::find_if(loaded.begin(),loaded.end(),[&](const auto& entry){return entry.name==name;});
        if(existing!=loaded.end()) {
            if(existing->read_only) continue;
            *existing={name,value,type,false};changed=true;
        } else if(loaded.size()<512) {loaded.push_back({name,value,type,false});changed=true;}
    }
    input.close();entries=std::move(loaded);if(changed) save();return true;
}

// source adapter only; no established separate native entry
bool ClientSettings::save() const {
    std::ofstream output(file,std::ios::out|std::ios::trunc);if(!output) return false;
    for(const auto& entry:entries) {
        if(entry.type==1 || entry.type==3) output<<entry.name<<'='<<entry.value<<'\n';
        else if(entry.type==2) output<<entry.name<<"=\""<<entry.value<<"\"\n";
    }
    return true; // The native checks fopen, but ignores fprintf/fclose errors.
}

// source adapter only; no established separate native entry
std::int32_t ClientSettings::get_int(std::string_view key) const {
    std::string name(key);std::transform(name.begin(),name.end(),name.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
    const auto entry=std::find_if(entries.begin(),entries.end(),[&](const auto& value){return value.name==name;});
    return entry!=entries.end() && entry->type==1?static_cast<std::int32_t>(std::strtol(entry->value.c_str(),nullptr,10)):0;
}

// source adapter only; no established separate native entry
bool ClientSettings::set_int(std::string_view key,std::int32_t value,bool read_only) {
    std::string name(key);std::transform(name.begin(),name.end(),name.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
    auto entry=std::find_if(entries.begin(),entries.end(),[&](const auto& item){return item.name==name;});
    if(entry==entries.end()) {
        if(entries.size()>=512 || name.size()>40) return false;
        entries.push_back({name,{},0,false});entry=entries.end()-1;
    }
    if(!read_only && entry->read_only) return false;
    if(read_only) entry->read_only=true;
    entry->type=1;entry->value=std::to_string(value);save();return true;
}
}
