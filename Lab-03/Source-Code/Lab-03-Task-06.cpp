#include <iostream>
#include <cstdlib>  // rand() ke liye
#include <ctime>    // time() ke liye
using namespace std;

int main(){
    // Random seed
    srand(time(0));

    int num1 = rand() % 900 + 100; // 100 se 999 tak 3-digit number
    int num2 = rand() % 900 + 100;
    int sum = num1 + num2;

    cout << "Math Tutor" << endl;
    cout << "----------" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "Press Enter to see the answer...";
    cin.get(); // Enter ka wait karega

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "  " << sum << endl;

    return 0;
}