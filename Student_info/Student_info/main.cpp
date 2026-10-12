/* This program stores my name and academic information
 * (CSC101 program,cout, average grade,tuition, and favorite symbol)
 * In variable self appropriate data type, then display that information
 * Using cout statement with proper formatting and escape sequence
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Alvin";
    string  lastName = "Abaidoo";
    int PythonPrograms = 10;
    double GradeAvg = 85.7;
    float semestertuition = 2584.45;
    char favoriteSymbol = '#';
    
    // print the heading.
    cout << "\t\tStudent Info" << endl;
    
    // print student Information
    cout << "student Nmae:\t" << lastName << ", " << firstName << endl;
    cout << "Python programs:\t" << PythonPrograms << endl;
    cout << "Grade Average:\t" << GradeAvg << endl;
    cout << "Semester Tuition:\t" << semestertuition << endl;
    cout << "Favorite Symbol:\t" << favoriteSymbol << endl;
    
    // print paragraph about me
    cout << "My name is " << lastName << ", " << firstName << "." << endl;
    cout << "This week, i learned that \n escape sequence can be used to start a new line. ";
    cout << "I love Programing because you can write a few lines of text and turn them into a functional website, app or a video game. And am looking forward to learn pointers. ";
    
    return 0;
}
