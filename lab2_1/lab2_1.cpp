// lab1_1.cpp
#include <iostream>
#include "FloatPower.h"
#include <Windows.h>


using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    FloatPower p1;                      
    FloatPower p2(2.5, 3.0);            
    FloatPower p3 = p2;                 

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << "Power = " << p2.Power() << endl;
    cout << "p3: " << p3 << endl;

    FloatPower p4;
    cout << "введіть дані для p4:\n";
    cin >> p4;
    p1 = p4; 
    cout << "\np4 після вводу: " << p4 << " | Power = " << p4.Power() << endl;
    cout << "\np1 : " << p1 << endl;

    cout << "\np2: " << p2 << endl;

    ++p2;
    cout << "\nпісля ++p2, модифікує first: " << p2 << endl;

    p2++;
    cout << "\nпісля p2++, модифікує second: " << p2 << endl;

    --p2;
    cout << "\nпісля --p2, модифікує first: " << p2 << endl;

    p2--;
    cout << "\nпісля p2--, модифікує second: " << p2 << endl;

    FloatPower arr[2] = { FloatPower(2.0, 2.0), FloatPower(3.0, 3.0) };
    for (int i = 0; i < 2; i++) {
        cout << "arr[" << i << "]: " << arr[i] << " | Power = " << arr[i].Power() << endl;
    }

    cout << "\nрозмір FloatPower без pack(1): " << sizeof(FloatPower) << " байт" << endl;
    cout << "\nрозмір FloatPowerPacked з pack(1): " << sizeof(FloatPowerPacked) << " байт" << endl;

    return 0;
}