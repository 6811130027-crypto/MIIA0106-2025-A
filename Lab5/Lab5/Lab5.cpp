// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> 
using namespace std;

double circleArea(double radius);
double rectArea(double width, double height);

int main() {

    double myRadius = 5.0;
    double myWidth = 5.0;
    double myHeight = 10.0;

    cout << "Circle Area = " << circleArea(myRadius) << endl;
    cout << "Rectangle Area = " << rectArea(myWidth, myHeight) << endl;

    return 0;
}

double circleArea(double radius) {
    return 3.1416 * pow(radius, 2);
}

double rectArea(double width, double height) {
    return width * height;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
