/* This program will ask the user for the number of quizzes they took.
 * The program will ask the user for the grade of quiz they took.
 * The grades will be added to find the total grade.
 * Calculate the average.
 * Count the number passing grades, nuber of failing grades and number of A's.
 */
#include <iostream>
using namespace std;

int main () {
    int num_quizzes;
    float quiz_grade;
    float total_grade = 0;
    float avg_grade;
    int passing_count = 0, failing_count = 0, A_count = 0;
    
    
    cout << "How many quizzes did you take? ";
    cin >> num_quizzes;
    
    for (int i = 1; i <= num_quizzes; i++) {
        cout << "Type your grade for quiz: ";
        cin >> quiz_grade;
        total_grade += quiz_grade;
        
        if (quiz_grade >= 93){
            passing_count++;
            A_count++;
        }
        else if  (quiz_grade >= 60){
            passing_count++;
        }
        
        else {
            failing_count++;
        }
        if (num_quizzes > 0 ) {
            avg_grade = total_grade / num_quizzes;
            cout << "Quiz average: " << avg_grade << endl;
        }
    }
    
    return 0;
}
