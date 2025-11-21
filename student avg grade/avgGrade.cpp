#include <iostream>
using namespace std;

char gradeFunc(double avg){
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main(){
    int count;
    double sum = 0, grade;

    cout << "How many grades? (1 to 5)\n";
    cin >> count;

    if (count < 1 || count > 5){
        cout << "You entered the wrong number of grades. Try again.\n";
        return 1 ;
    }

    for (int i = 1; i <= count; i++){
        cout << "Enter the grade " << i << ": ";
        cin >> grade;
        sum += grade;
    }

    double avg = sum / count;

    cout << endl << "Your average grade is: " << avg << endl;

    cout << "Your letter grade is: " << gradeFunc(avg);
}