/* This program ask the user to type in a number for the days of the week.
 EX: 1 for sunday
 * The program print the name of the day
 */
 
#include <iostream>

using namespace std;
int main (){
    int day_num;
    cout << "Type a number for the days of the week (1-7): ";
    cin >> day_num;
    
    switch (day_num) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "saturday" << endl;
            break;
        default:
            cout << "Invalide day number." << endl;
}
    
    return 0;
}
