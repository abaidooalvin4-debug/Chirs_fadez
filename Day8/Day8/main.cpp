/* This program asks the user to type a character.
 * The program presnt a sentens:
 * Your character is a ____ (digit/lowercase letters/uppercase letters).
 */

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout <<"type a character";
    cin >> ch;

    if(ch >= '0' && ch <= '9') {
        cout <<"Your caracher is a digit" << endl;
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout <<"Your character is a lowercase letter." << endl;
    }
    else if (ch >= 'A' && ch <= 'z') {
        cout <<"Your charater is a uppercase letter." << endl;
    }
    return 0;
}
