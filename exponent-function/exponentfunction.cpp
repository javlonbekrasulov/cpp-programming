#include <iostream>
using namespace std; 

int power(int baseNum, int powerNum){
    int result = 1;
    for(int i = 0; i < powerNum; i++){
        result = result * baseNum;
    }
    return result;
}

int main(){
    int num1;
    int num2;

    cout << "Please enter the base number: ";
    cin >> num1;

    cout << "Pleas enter the power number: ";
    cin >> num2;

    cout << "The answer is: " << power(num1, num2) << endl;
    return 0;
}
