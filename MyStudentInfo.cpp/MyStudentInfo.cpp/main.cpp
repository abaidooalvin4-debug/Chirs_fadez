/*
 * CompareLiquidToWater.cpp
 *
 * The program ask the user the measurement of liquid found in the lab.
 * (Its pH, mass in gram, volume in mL, color/appearance of the liduid).
 * It calculates the liquid's density and then compares the pH and density of the liquid
 * to the starndard properties of water (ph 7.0 and density 7.0 and density 1.0 g/mL).
 */

#include <iostream>
#include <string>

using namespace std;
int main() {
    const double WATER_PH = 7.0;
    const double WATER_DENSITY = 1.0;
 
    double liquidPh = 0.0;
    int massGrams = 0;
    int volumeMl = 0;
    string appearance = "";
 
    double liquidDensity = 0.0;
 
    cout << "Enter the pH of the liquid: ";
    cin >> liquidPh;
 
    cout << "Enter the mass of the liquid in grams: ";
    cin >> massGrams;
 
    cout << "Enter the volume of the liquid in mL: ";
    cin >> volumeMl;
 
    cin.ignore(1000, '\n');
 
    cout << "Describe the color/appearance of the liquid (ex: clear green): ";
    getline(cin, appearance);
 
    cout << endl;
 
    int wholeNumberDensity = 0;
    if (volumeMl != 0)
    {
        wholeNumberDensity = massGrams / volumeMl;
    }
    
    if (volumeMl > 0)
    {
        liquidDensity = static_cast<double>(massGrams) / volumeMl;
    }
 
    cout << "Appearance of the liquid: " << appearance << endl;
    cout << endl;
 
    cout << "pH of the liquid: " << liquidPh
         << " (water is " << WATER_PH << ")" << endl;
 
    if (liquidPh >= 0 && liquidPh <= 3.0)
    {
        cout << "The liquid is very acidic and has a lower pH than water." << endl;
    }
    else if (liquidPh > 3.0 && liquidPh < WATER_PH)
    {
        cout << "The liquid is acidic and has a lower pH than water." << endl;
    }
    else if (liquidPh == WATER_PH)
    {
        cout << "The liquid has the same pH as water." << endl;
    }
    else if (liquidPh > WATER_PH && liquidPh <= 14)
    {
        cout << "The liquid is basic and has a higher pH than water." << endl;
    }
    else
    {
        cout << "The pH entered is not between 0 and 14." << endl;
    }
 
    cout << endl;
 
    if (volumeMl <= 0)
    {
        cout << "The volume must be greater than 0, so density cannot be calculated." << endl;
    }
    else
    {
        cout << "The density of the liquid is " << liquidDensity << " g/mL. ";
        cout << "The density is ";
 
        if (liquidDensity > 0 && liquidDensity < WATER_DENSITY)
        {
            cout << "lower density than water." << endl;
        }
        else if (liquidDensity == WATER_DENSITY)
        {
            cout << "same density as water." << endl;
        }
        else if (liquidDensity > WATER_DENSITY)
        {
            cout << "higher density than water." << endl;
        }
        else
        {
            cout << "not valid (mass must be greater than 0)." << endl;
        }
        
        cout << "(Integer division would have given " << wholeNumberDensity
             << " g/mL, which loses the decimal part.)" << endl;
    }
    return 0;
}
