/* Ask for the customer's first name, the number of games, and whether they want shoe rental (Y or N).
 If the number of games is not 1 to 10, print Games must be 1 to 10. and stop.
 Each game costs $4.00. Shoe rental is a flat $3.00 (not per game).
 If the customer plays 3 or more games, take $2.00 off the subtotal.
 Add 5% tax to get the total.
 Show the subtotal, tax, and total.
 Show the cost per game (keeping the decimal part).
 Print "Frequent player" if they played 5 or more games, otherwise "Casual player".
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    const double GAME_PRICE = 4.00;
    const double SHOE_PRICE = 3.00;
    const double DISCOUNT = 2.00;
    const double TAX_RATE = 0.05;
    
    string name;
    int games;
    int shoes;
     
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter number of games ";
    cin >> games;
    cout << "Enter shoe rental (Y or N). ";
    cin >> shoes;
     
    if (shoes < 1 || shoes > 10){
        cout << "Game must be 1 to 10." << endl;
        return 1;
    }
    double subtotal = games * GAME_PRICE;
    
    if (shoes == 'Y' || shoes == 'y')
        subtotal = subtotal + SHOE_PRICE;
    
    if (games >= 3)
        subtotal = subtotal - DISCOUNT;
    
    double tax = subtotal * TAX_RATE;
    double total = subtotal + tax;
    double perGame = total / games;
    
    string label = (games >= 5) ? "Frequent Player" : "Casual player";
    
    cout << "Bill for " << name << endl;
    cout << "subtotal: $" << subtotal << endl;
    cout << "Tax " << tax << endl;
    cout << "Cost per game " << perGame << endl;
    cout << label << endl;
    
    
    return 0;
}
