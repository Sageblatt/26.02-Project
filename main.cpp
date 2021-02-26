#include "MainInit.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    WaterVapour part1;
    Oxygen part2;
    Hydrogen part3;
    NewGas part4(100, 5, 30);
    Gas storage[7];
    storage[0] = part1;
    storage[1] = part2;
    storage[2] = part3;
    storage[3] = part4;
    for(int i = 0; i < 4; i++) {
        cout << "Mass" << i << " " << storage[i].GetMass(1) << endl;
        cout << "Heat" << i << " " << storage[i].Heat(3, 5) << endl;
        cout << "HeatP" << i << " " << storage[i].HeatP(3, 5) << endl;
        storage[i].ChangeDensity(0.006);
    }

    return 0;
}