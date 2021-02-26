#include "MainInit.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Gases" << endl << endl;
    WaterVapour part1;
    Oxygen part2;
    Hydrogen part3;
    NewGas part4(100, 5, 30);
    Gas storage[4];

    storage[0] = part1;
    storage[1] = part2;
    storage[2] = part3;
    storage[3] = part4;

    for(int i = 0; i < 4; i++) {
        cout << "Mass" << i << " " << storage[i].GetMass(1) << endl;
        cout << "Heat" << i << " " << storage[i].Heat(3, 5) << endl;
        cout << "HeatP" << i << " " << storage[i].HeatP(3, 5) << endl << endl;
        storage[i].ChangeDensity(0.006);
    }

    cout << endl << "Liquids" << endl << endl;

    Water part10;
    MeltedTin part11;
    LiquidNitrogen part12;
    HydrochloridAcid part13;
    NewLiquid part14(1, 2);

    Fluid space[5];
    space[0] = part10;
    space[1] = part11;
    space[2] = part12;
    space[3] = part13;
    space[4] = part14;
    for(int i = 0; i < 6; i++)
    {
        cout << "Heat" << i << " " << space[i].Heat(5, 10) << endl;
        cout << "Pressure" << i << " " << space[i].Pressure(1) << endl;
        cout << "Mass" << i << " " << space[i].GetMass(5) << endl << endl;
    }

    cout << endl << "Metals" << endl << endl;

    Metal spot[3];
    Iron part20;
    Wolfram part21;
    NewMetal part22(15, 7, 73, 41);

    spot[0] = part20;
    spot[1] = part21;
    spot[2] = part22;
    for(int i = 0; i < 3; i++)
    {
        cout << "Heat" << i << " " << spot[i].Heat(5, 10) << endl;
        cout << "Heat parallelepiped" << i << " " << spot[i].Heat(1, 2, 3, 5) << endl;
        cout << "Mass" << i << " " << spot[i].GetMass(5) << endl;
        cout << "Deformation" << i << " " << spot[i].Deformation(4, 8, 5) << endl;
        cout << "Resistance" << i << " " << spot[i].Resistance(4, 6) << endl << endl;

    }
    return 0;
}