#include <iostream>
using namespace std;

int main()
{
    double length, width, area;
    cout << "Enter length and width: ";
    cin >> length >> width;
    area = length * width;
    cout << "Area of rectangle = " << area << endl;
    return 0;
}