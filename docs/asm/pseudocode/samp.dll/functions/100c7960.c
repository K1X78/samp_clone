/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c7960
 * Name: FUN_100c7960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100c7960(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "Unsupported protocol";
  case 2:
    return "Failed initialization";
  case 3:
    return "URL using bad/illegal format or missing URL";
  case 4:
    return 
    "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision."
    ;
  case 5:
    return "Couldn\'t resolve proxy name";
  case 6:
    return "Couldn\'t resolve host name";
  case 7:
    return "Couldn\'t connect to server";
  case 8:
    return "Weird server reply";
  case 9:
    return "Access denied to remote resource";
  case 10:
    return "FTP: The server failed to connect to data port";
  case 0xb:
    return "FTP: unknown PASS reply";
  case 0xc:
    return "FTP: Accepting server connect has timed out";
  case 0xd:
    return "FTP: unknown PASV reply";
  case 0xe:
    return "FTP: unknown 227 response format";
  case 0xf:
    return "FTP: can\'t figure out the host in the PASV response";
  case 0x10:
    return "Error in the HTTP2 framing layer";
  case 0x11:
    return "FTP: couldn\'t set file type";
  case 0x12:
    return "Transferred a partial file";
  case 0x13:
    return "FTP: couldn\'t retrieve (RETR failed) the specified file";
  default:
    return "Unknown error";
  case 0x15:
    return "Quote command returned error";
  case 0x16:
    return "HTTP response code said error";
  case 0x17:
    return "Failed writing received data to disk/application";
  case 0x19:
    return "Upload failed (at start/before it took off)";
  case 0x1a:
    return "Failed to open/read local data from file/application";
  case 0x1b:
    return "Out of memory";
  case 0x1c:
    return "Timeout was reached";
  case 0x1e:
    return "FTP: command PORT failed";
  case 0x1f:
    return "FTP: command REST failed";
  case 0x21:
    return "Requested range was not delivered by the server";
  case 0x22:
    return "Internal problem setting up the POST";
  case 0x23:
    return "SSL connect error";
  case 0x24:
    return "Couldn\'t resume download";
  case 0x25:
    return "Couldn\'t read a file:// file";
  case 0x26:
    return "LDAP: cannot bind";
  case 0x27:
    return "LDAP: search failed";
  case 0x29:
    return "A required function in the library was not found";
  case 0x2a:
    return "Operation was aborted by an application callback";
  case 0x2b:
    return "A libcurl function was given a bad argument";
  case 0x2d:
    return "Failed binding local connection end";
  case 0x2f:
    return "Number of redirects hit maximum amount";
  case 0x30:
    return "An unknown option was passed in to libcurl";
  case 0x31:
    return "Malformed telnet option";
  case 0x33:
    return "SSL peer certificate or SSH remote key was not OK";
  case 0x34:
    return "Server returned nothing (no headers, no data)";
  case 0x35:
    return "SSL crypto engine not found";
  case 0x36:
    return "Can not set SSL crypto engine as default";
  case 0x37:
    return "Failed sending data to the peer";
  case 0x38:
    return "Failure when receiving data from the peer";
  case 0x3a:
    return "Problem with the local SSL certificate";
  case 0x3b:
    return "Couldn\'t use specified SSL cipher";
  case 0x3c:
    return "Peer certificate cannot be authenticated with given CA certificates";
  case 0x3d:
    return "Unrecognized or bad HTTP Content or Transfer-Encoding";
  case 0x3e:
    return "Invalid LDAP URL";
  case 0x3f:
    return "Maximum file size exceeded";
  case 0x40:
    return "Requested SSL level failed";
  case 0x41:
    return "Send failed since rewinding of the data stream failed";
  case 0x42:
    return "Failed to initialise SSL crypto engine";
  case 0x43:
    return "Login denied";
  case 0x44:
    return "TFTP: File Not Found";
  case 0x45:
    return "TFTP: Access Violation";
  case 0x46:
    return "Disk full or allocation exceeded";
  case 0x47:
    return "TFTP: Illegal operation";
  case 0x48:
    return "TFTP: Unknown transfer ID";
  case 0x49:
    return "Remote file already exists";
  case 0x4a:
    return "TFTP: No such user";
  case 0x4b:
    return "Conversion failed";
  case 0x4c:
    return "Caller must register CURLOPT_CONV_ callback options";
  case 0x4d:
    return "Problem with the SSL CA cert (path? access rights?)";
  case 0x4e:
    return "Remote file not found";
  case 0x4f:
    return "Error in the SSH layer";
  case 0x50:
    return "Failed to shut down the SSL connection";
  case 0x51:
    return "Socket not ready for send/recv";
  case 0x52:
    return "Failed to load CRL file (path? access rights?, format?)";
  case 0x53:
    return "Issuer check against peer certificate failed";
  case 0x54:
    return "FTP: The server did not accept the PRET command.";
  case 0x55:
    return "RTSP CSeq mismatch or invalid CSeq";
  case 0x56:
    return "RTSP session error";
  case 0x57:
    return "Unable to parse FTP file list";
  case 0x58:
    return "Chunk callback failed";
  case 0x59:
    return "The max connection limit is reached";
  case 0x5a:
    return "SSL public key does not match pinned public key";
  case 0x5b:
    return "SSL server certificate status verification FAILED";
  case 0x5c:
    return "Stream error in the HTTP/2 framing layer";
  }
}


/* END FUNCTION 0x100c7960 */
