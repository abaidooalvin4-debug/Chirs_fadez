// This program ask the user for ther age, credit, gpa, and first name
// The peogram will print a summary anbout the user's info

#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    int credits;
    float gpa;
    int first_name;
    cout <<"How old are you?";
    cin >> age;
    cout <<"Your age is " << age << "." << endl;
    cout <<"How many credit do you have? ";
    cin >> credits;
    cout <<"What's your gpa? ";
    cin >> gpa;
    cout <<"What is your first name? ";
    cin >> first_name;
    
    cout << "User Info Summary" << endl;
    cout << "Hi, " << first_name << endl;
    cout << "your age is " << age << "." << endl;
    cout << "You have " << credits;
         << "Credits and your gpa" << gpa << "." << endl;
    return 0;
}
