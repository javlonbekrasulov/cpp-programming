#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int year;
};

int main(){
    Book BookNum1;
    BookNum1.title = "Man's Search For Meaning - ";
    BookNum1.author = "Viktor Frankl - ";
    BookNum1.year = 1946;

    Book BookNum2;
    BookNum2.title = "1984 - ";
    BookNum2.author = "George Orwell - ";
    BookNum2.year = 1948;

    cout << BookNum1.title << BookNum1.author << BookNum1.year << endl;
    cout << BookNum2.title << BookNum2.author << BookNum2.year << endl;


}

