// Rotate rectangle 90 degrees
/* This program will have variables for the lenght and width of a rectagngle.
 * The promgram will print a sentence showing the lengthj and width.
 *
 * Print a sentence starting that triangle will be rotated 90 degrees.
 * The value of the lenght and width will be swapped.
 * The program will print a sentence showing the length and width.
 */

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    float length, width;
    float temp;
    float perimeter, area;
    float diagonal;
    
    //ask the user for the length and width
    cout <<"length: ";
    cin >> length;
    cout <<"width: ";
    cin >> width;
    
    perimeter = 2 * (length * width);
    area = length * width;
    diagonal = sqrt ( pow (length, 2) + pow(width, 2));
    
    cout << "The length is " << length << " and the width is " << width << endl;
    cout << "The rectangle is rotated 90 degrees. " << endl;
    temp = length;
    length = width;
    width = temp;
    cout << "After rotating:" << endl;
    cout << "The length is " << length << " and the width is " << width << endl;

    return 0;
}
