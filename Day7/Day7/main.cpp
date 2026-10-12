#include <iostream>

using namespace std;

int main() {
    float grade;
    int user_num;
    cout << " Type in numeric grade to see if you passed: ";
    cin >> grade;
    // if the user's grade is 60 or more, print "You passed"
    if (grade >= 60) {
        cout << "You Passed" << endl;
    }
    else {
        cout << "You faild" << endl;
    }
    
    cout << "Type a whole number. The program will tell you if it's even or odd: ";
    cin >> user_num;
    if (user_num % 2== 0){
        cout << "Your number, " << user_num << ", is even." << endl;
    }
    else {
        cout << "Your number, " << user_num << ", is odd." << endl;
    }
    cout << "TYpe whole number. The program will tell you if it's +, -, or zero: " << endl;
    cin >> user_num;
    if (user_num > 0){
        cout << "Your number is positive." << endl;
        if (user_num % 2 == 0) {
            cout << " and even." << endl;
        }
    }
    else if (user_num < 0) {
        cout << "Your number is negative." << endl;
    }
    else {
        cout << "It's zero." << endl;
    }
    
    return 0;
}
