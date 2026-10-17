// FloatPower.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class FloatPower {
private:
    double first;
    double second;

public:
    FloatPower();                                 
    FloatPower(double x, double y);                // ³í³ö³àë³çàö³¿
    FloatPower(const FloatPower& other);           // êîï³þâàííÿ

    double GetFirst() const { return first; }
    double GetSecond() const { return second; }
    bool SetFirst(double value);
    void SetSecond(double value);

    double Power() const;

    FloatPower& operator=(const FloatPower& other);

    operator string() const;

    FloatPower& operator++();    
    FloatPower operator++(int);  
    FloatPower& operator--();    
    FloatPower operator--(int);  

    friend istream& operator>>(istream& is, FloatPower& obj);
    friend ostream& operator<<(ostream& os, const FloatPower& obj);
};

#pragma pack(push, 1)
class FloatPowerPacked {
private:
    double first;
    double second;
};
#pragma pack(pop)