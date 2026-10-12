/* This program ask the user for their hight in inches.
 * The program will calculate their hight in feet and inches.
 * EX: if the user is 63 inches tall, the program will print
 * You are 5 ft 3 in (5'3")
 * Ask the user for their friend's height in inches.
 * The program will calculate and print the average of the
 * user's height and the friend's height.
 */
#include <iostream>

using namespace std;

int main() {
    int hight_in_inches, feet, inches;
    int friend_height;
    float avg_height;
    
    
    cout << " What is your hight in inches? ";
    cin >> hight_in_inches;
    feet = hight_in_inches / 12;
    // height_in_inches / 12 = feet; // WRONG
    inches = hight_in_inches % 12;
    cout << "You are " << feet << " ft " << inches << " in ";
    cout << "(" << feet << "'" << inches << "\")" << endl;
    cout << " What is your Friend's height in inches? ";
    cin >> friend_height;
    avg_height = (hight_in_inches + friend_height ) /2.0;
    cout << " The average hight is " << avg_height << " inches. " << endl;
    
    avg_height = ( hight_in_inches + friend_height) / 2;
    cout << " The  average height is " << avg_height << " inches. " << endl;
    
    avg_height = (hight_in_inches + friend_height) / 2;
    cout << " The average height is " << avg_height << avg_height << " inches. " << endl;
    
    return 0;
}
