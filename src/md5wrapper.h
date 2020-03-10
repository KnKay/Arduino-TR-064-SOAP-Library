#ifndef MD5WRAPPER_H
#define MD5WRAPPER_H

/*
As we also need to Wrap the MD stuff... I make a wrapper for this as well! 


*/
class MD5Builder{
    public:
    void begin();
    void add(int arg);
    void add(String arg);
    String calculate();
    void getBytes(uint8_t * output);
};

#endif