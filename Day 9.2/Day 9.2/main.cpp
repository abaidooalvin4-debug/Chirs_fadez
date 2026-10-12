/* Simple Calculator Version
 * The user choose an opption from the menu:
   A - addition
   S - subtraction
   M - multiplication
   The program will ask the opereation for two interger operands
   The arithmetic expression is print along with the result.
 */
#include <iostream>

using namespace std;

int main () {
    char operation;
    int num1, num2;
    cout << "Choose an opereation from the menu: " << endl;
    cout << "A - addiction" << endl;
    cout << "S - subtraction" << endl;
    cout << "M - multiplication" << endl;
    cout << "Type a letter from the menu:";
    cin >> operation;
    cout << "Type two integer valuse for the operation: ";
    cin >> num1 >> num2;
    if (operation == 'A') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operation == 'S') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operation == 'M') {
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    }
    
    else {
        cout << " Invalid option selected: " << endl;
    }
    return 0;
}
