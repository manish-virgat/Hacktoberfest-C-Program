// Beautiful Year  271A  CF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int y, a, b, c, d;
    cin >> y;
    y += 1;
   
    while (true) {
        a = y % 10;
        b = (y/10) % 10;
        c = (y/100) % 10;
        d = (y / 1000) % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y;
            return 0;
        }
        y += 1;

    }
}

