/* Simple Calculator Version
 * The user choose an opption from the menu:
   A - addition
   S - subtraction
   M - multiplication
   D - division
   The program will aske the opereation for two interger operands
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
    cout << "D - division" << endl;
    cout << "Type a letter from the menu:";
    cin >> operation;
    cout << "Type two integer valuse for the operation: ";
    cin >> num1 >> num2;
    
    switch (operation) {
        case 'A': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case 'S': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case 'M': cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
            break;
        case 'D': cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
            break;
            
        case 'd':   if (num2 == 0) {
            cout << "Erro: division by zero" << endl;
        }
        else {
            cout << num1 << "/" << num2 << " = " << static_cast<float>(num1)/num2 << endl;
        }
    }
    return 0;
}
