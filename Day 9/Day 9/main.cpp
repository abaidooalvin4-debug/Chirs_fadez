/* This program uses conditional expression.
 * The program will have a constant for the discount rate for a museum ticket.
 * Adult pay regular price which is $29.99. Minors will get a discount of 22%. Minors will get a discount of 22%.
 * The program ask the user for their age.
 * The program will print the type of ticket: Adult or Minor.
 * Aconditional expression will be used for assinging the users ticket price which
 * is then prented.
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    const float DISC_RATE = 0.22; //discount rate is 22%
    float reg_price = 29.99;
    int age;
    float user_price;
    cout << "How old are you? ";
    cin >> age;
    cout << ( age >= 18 ? "Adult" : "Minor" ) << endl;
    user_price = age >= 18 ? reg_price : reg_price - (reg_price * DISC_RATE);
    
    cout << showpoint << fixed << setprecision(2);
    cout << "Your musume ticket price is $" << user_price << endl;
    
    return 0;
}
