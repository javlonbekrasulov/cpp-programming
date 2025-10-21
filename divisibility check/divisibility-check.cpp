#include <iostream>
using namespace std;

int main(){
    // A program that finds and prints all numbers between 100 and 500 that are divisible by both 3 and 5.
    for (int i = 100; i <= 500; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout << i << " is divisible.\n";
        }
    }
}