#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int length;
    string symbol;
    string which;

    cout << "Enter the length of the triangle: ";
    cin >> length;
    cout << "Enther the symbol: ";
    cin >> symbol;
    cout << "Which triangle do you want to make (normal/reverse)? ";
    cin >> which;

    if (which == "normal" || which == "Normal"){
        for (int i = 1; i <= length; i++){
            for (int j = 0; j < i; j++){
                cout << setw(2) << symbol;
            }
            cout << endl;
        }
        
    }
    else if (which == "reverse" || which == "Reverse"){
        for (int i = length; i >= 1; i--){
            for (int j = 0; j < i; j++){
                cout << setw(2) << symbol;
            }
            cout << endl;
        }
        
    }
    else
    {
        cout << "Invalid input";
    }
    
    
}