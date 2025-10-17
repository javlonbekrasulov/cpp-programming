#include <iostream>
using namespace std; 

int main(){
    int a, b, c;

    cout << "You have to enter all three length of the triangle to determine its type." << endl;

    cout << "Enter the first legth of the triangle in numbers: ";
    cin >> a;
    cout << "Enter the second legth of the triangle in numbers: ";
    cin >> b,
    cout << "Enter the third legth of the triangle in numbers: ";
    cin >> c;

    if(a == b && b == c){
        cout << "Your triangle is equilateral. " << endl;
    }
    else if (((a == b && b != c) || (a == c && b != c)) || b == c && a != c){
        cout << "Your triangle is isosceles. " << endl;
    }
    else if (a != b && b != c && a!= c){
        cout << "Your triangle is scalene." << endl;
    }
    else {
        cout << "You entered an invalid character. ";
    }
    return 0;
}