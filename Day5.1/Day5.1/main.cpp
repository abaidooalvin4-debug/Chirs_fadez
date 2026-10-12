/* This program calculate the area and the circufrence of a circle.
 * The Program ask fofr the diameter and calculate the are
 * and the circumfrence.
 */

#include <iostream>

using namespace std;

int main() {
    const float PI = 3.14159265;
    float diameter, area, circumfrence, radius;
    
    cout << "What is the diamter of the cirle? ";
    cin >> diameter;
    circumfrence = 2 * PI * radius; // PI * diameter
    radius = diameter / 2;
    area = PI * radius * radius; // PI area = PI * pow(radius, 2);
    cout << "Cicumfernce : " << circumfrence << endl;
    cout << "Area: " << area << endl;
    cout << "PI: " << PI << endl;
    
    
    float gpa = 4.0;
    
    cout  <<"GPA: " << gpa << endl;
    
    return 0;
}
