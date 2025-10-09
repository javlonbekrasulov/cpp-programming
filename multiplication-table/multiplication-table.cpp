#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Which number's multiplication table would you like? ";
    cin >> number;

    int i;
    for (i = 1; i <= 10; i++) {
    cout << number << " x " << i << " = " << number * i << "\n";}
}