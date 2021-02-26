#include "MainInit.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Hydrogen part1;
    Oxygen part2;
    Gas storage[2];
    storage[1] = part1;
    storage[2] = part2;
    cout << storage[2].GetMass(20) << endl;
    return 0;
}