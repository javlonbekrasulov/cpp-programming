#include <iostream>
using namespace std;

int main()
{
    cout << "Hello! Please, enter your first number: ";
    int firstNUM;
    cin >> firstNUM;
    cout << "Great! Now, enter your second number: ";
    int secondNUM;
    cin >> secondNUM;
    int sum;
    sum = firstNUM + secondNUM;
    cout << "The sum of " << firstNUM << " and " << secondNUM << " is : " << sum << "!";
}