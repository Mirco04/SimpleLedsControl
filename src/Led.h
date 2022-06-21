#ifndef Led_h
#define Led_h

class Led{

    private:

    int _LedPin;

    public:

    void Setup(const int LedPin);
    void turnON();
    void turnOFF();

};

#endif