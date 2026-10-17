// FloatPower.cpp
#include "FloatPower.h"
#include <cmath>
#include <sstream>

FloatPower::FloatPower() : first(1.0), second(0.0) {}

FloatPower::FloatPower(double x, double y) {
    if (!SetFirst(x)) {
        first = 1.0; 
    }
    SetSecond(y);
}

FloatPower::FloatPower(const FloatPower& other) : first(other.first), second(other.second) {}

bool FloatPower::SetFirst(double value) {
    if (value == 0.0) {
        return false;
    }
    first = value;
    return true;
}

void FloatPower::SetSecond(double value) {
    second = value;
}

double FloatPower::Power() const {
    return pow(first, second);
}

FloatPower& FloatPower::operator=(const FloatPower& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
    }
    return *this;
}

FloatPower::operator string() const {
    stringstream ss;
    ss << "First: " << first << ", Second: " << second;
    return ss.str();
}

FloatPower& FloatPower::operator++() {
    ++first;
    return *this;
}

FloatPower FloatPower::operator++(int) {
    FloatPower temp(*this);
    second++;
    return temp;
}

FloatPower& FloatPower::operator--() {
    --first;
    return *this;
}

FloatPower FloatPower::operator--(int) {
    FloatPower temp(*this);
    second--;
    return temp;
}

ostream& operator<<(ostream& os, const FloatPower& obj) {
    os << (string)obj;
    return os;
}

istream& operator>>(istream& is, FloatPower& obj) {
    double f, s;
    cout << "¬вед≥ть first: ";
    is >> f;
    while (!obj.SetFirst(f)) {
        cout << "ѕомилка. ¬вед≥ть first (не дор≥внюЇ 0): ";
        is >> f;
    }
    cout << "¬вед≥ть second: ";
    is >> s;
    obj.SetSecond(s);
    return is;
}