#include <iostream>
using namespace std;

int main(){
    int units = 10;
    float mass = 4.2f;
    double weight;

    weight = mass * units;

    cout << "mass * units = " << mass * units << endl;
    cout << "weight (double) = " << weight << endl;
    
    return 0;
}