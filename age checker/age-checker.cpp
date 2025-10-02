#include <iostream>
#include <string>
using namespace std;

int main()
{
    int givenAge;
    string name;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "What is your age? ";
    cin >> givenAge;
    if (givenAge >=18)
    {
        cout << "Dear " << name << ", you are an adult and you can vote." << endl;
    }
    else
    {
        cout << "Dear " << name << ", you are not an adult and you cannot vote." << endl;
    }
    return 0;
}