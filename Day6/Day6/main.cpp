/* Ask The user for the price of an item.
 * Calculate the tax (at 8.875%) and price after the tax.
 * Suppse it will be paid over 12 months.
 * Calculate the monthly payment amount.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const float SALES_TAX = 0.08875;
    float item_price;
    float price, tax_amount, price_after_tax;
    float monthly_payment;
    cout <<" What is the price of the item? ";
    cin >> item_price;
    tax_amount = SALES_TAX * item_price;
    price_after_tax = item_price + tax_amount;
    monthly_payment = price_after_tax / 12;
    
    // prict price after tax and montly amount with dollar sign
    // and two digits after the dercimal.
    cout << showpoint << fixed << setprecision(2);
    cout << "Price after tax: $" << price_after_tax  << endl;
    cout << "Monthly paymanet: $" << monthly_payment << endl;
    
    return 0;
}
