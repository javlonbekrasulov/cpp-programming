#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string name;
    string citizenship;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "What is your age? ";
    cin >> age;
    cout << "Are you a citizen of this country? (yes/no) ";
    cin >> citizenship;

    if ( age >= 18 && (citizenship == "yes" || citizenship == "Yes") )
    {
        cout << "Dear " << name << ", you are eligible to vote." << endl;
    }
    else if (age < 18)
    {
        cout << "Dear " << name << ", you are not eligible to vote, because you are under 18." << endl;
    }
    else if ( citizenship == "no" || citizenship == "No" )
    {
        cout << "Dear " << name << ", you are not eligible to vote, because you are not a citizen." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
    return 0;
}