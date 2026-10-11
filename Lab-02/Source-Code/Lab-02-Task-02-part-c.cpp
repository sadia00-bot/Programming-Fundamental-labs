#include <iostream>
using namespace std;

int main()
{
    double height, base, area;
    cout << "Enter base and height: ";
    cin >> base >> height;
    area = 0.5 * base * height;
    cout << "Area of triangle = " << area << endl;
    return 0;
}