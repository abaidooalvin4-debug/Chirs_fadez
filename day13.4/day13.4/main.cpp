// user input validation
#include <iostream>
using namespace std;

int main () {
    int num_quizzes;
    cout << "How many quizzes did you take? ";
    cin >> num_quizzes;
    
    // user input validation that'll ask the retype the number od quizzes if it is negative or 0
    while (num_quizzes <= 0){
        cout << num_quizzes;
    }
    
    
    return 0;
}
