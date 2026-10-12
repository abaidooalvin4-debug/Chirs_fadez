/* Ask the user for the number of days they tracked their steps.
 * For each day, ask for the number of steps they took.
 * Find the average steps per day.
 */

#include <iostream>

using namespace std;
 
int main() {
    int num_days;
    int num_steps;
    int total_steps = 0;
    float avg_steps;
    int step_goal;
    int days_goal_met;
    int days_goal_not_met;
    
    cout << "How many days did you track your steps? ";
    cin >> num_days;
    cout << "What is your step goal? ";
    cin >> step_goal;
    
    
    for (int i = 1; i <= num_days; i++) {
        cout <<"How many steps did you take on day # " << i << "? ";
        cin >> num_steps;
        total_steps += num_steps;
        if (num_steps >= step_goal){
            days_goal_met++;
        }
        else {
            days_goal_not_met++;
        }
    }
    if (num_days > 0){
        avg_steps = static_cast<float>(total_steps)/ num_days;
        cout << "Average steps: " << avg_steps << endl;
    }
    cout << "Your met your goal of " << step_goal << endl;
    cout << "You did not meet your gaol of " << endl;
    return 0;
}
