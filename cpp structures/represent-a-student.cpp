#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    char grade;
};

int main(){
    student a;
    a.name = "Liam";
    a.age = 35;
    a.grade = 'A';

    cout << "Name: " << a.name << endl;
    cout << "Age: " << a.age << endl;
    cout << "Grade: " << a.grade << endl;
    
    return 0;
}
