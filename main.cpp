#include "MainInit.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Hydrogen part1;
    Oxygen part2;
    Hydrogen part3;
    NewGas part4(100, 5, 30);
    Gas storage[7];
    storage[0] = part1;
    storage[1] = part2;
    storage[2] = part3;
    storage[3] = part4;
    for(int i = 0; i < 4; i++) {
        cout << storage[i].GetMass(1) << endl;
    }
    return 0;
}