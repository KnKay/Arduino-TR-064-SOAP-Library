#ifndef HTTPWRAPPER_H
#define HTTPWRAPPER_H

/*
This class will simply wrap the ESP Http stuff to the Arduino one. 
Both seem to be not the same in naming and how to post! 

*/
#include <HttpClient.h>
#include <EthernetClient.h>
#include <Wire.h>
#include <Ethernet.h>

#define HTTP_CODE_OK 200

class HTTPClientWrapper{
    public:
    void begin(String, int, String);
    void addHeader(String, String);
    int POST(String address);
    int GET();
    String getString();
    String errorToString(int);
    void end();
};

#endif