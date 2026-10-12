/* This program does not ask the user for the number of quizzes.
 * The user type each quiz grade one at a time.
 * If they finish they can type -1
 * The program finds total of grades.
 */

#include <iostream>
using namespace std;

int main () {
    float quiz_grade;
    float total_grade = 0;
    float num_quizzes = 0;
    cout << "Type your grade on at a time. When you finish, type -1 " << endl;
    cout << "Type your grade for the first quiz: ";
    cin >> quiz_grade;
    
    while (quiz_grade != -1) {
        total_grade += quiz_grade;
        cout << "Type your grade fot the quiz: ";
        cin >> quiz_grade;
    }
    cout << "Total grade is " << total_grade << endl;
    cout << "The number of quizzes is " << num_quizzes << endl;
    
    while (quiz_grade != -1){
        num_quizzes++;
        total_grade += quiz_grade;
        cout << "type your grade for quiz#" << num_quizzes +1 << ": ";
        cin >> quiz_grade;
    }
    cout << "the total is " << total_grade << endl;
    cout << "The number of quizzes is " << num_quizzes << endl;
    if (num_quizzes > 0){
        cout << "Average: " << total_grade / num_quizzes << endl;
    }
    
    return 0;
}
