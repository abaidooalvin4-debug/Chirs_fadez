/* The program keep asking the user to type a character.
 * The loop stops when the suer type Q.
 */
#include <iostream>
using namespace std;

int main() {
    char user_input;
    cout << "Type Q to stop the loop" << endl;
    
    cout << "Type a character: ";
    cin >> user_input;
    while (user_input != 'Q') {
        cout << "Type another character: ";
        cin >> user_input;
    }
    cout << "The loop has stopped." << endl;
    
    return 0;
}
