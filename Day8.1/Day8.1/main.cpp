#include <iostream>
using namespace std;

int main(){
    int credits;
    float gpa;
    char user_has_rec; // for the user to responed with Y/y for yes
    bool has_rec;
    
    cout <<"How many credits do you have? ";
    cin >> credits;
    cout <<"What is your gpa? ";
    cin >> gpa;
    cout <<"Do ypu have a recomendation from a proffersor? (Y/y for yes) ";
    cin >> user_has_rec;
    
    if (user_has_rec == 'Y' || user_has_rec == 'y')
        has_rec = true;
    else
          has_rec = false;

    if ( (gpa >= 3.5 || has_rec ) && credits >= 40) {
    cout << "You are eligible for the internship" << endl;
}
    else {
    cout << "There are other opportunities" << endl;
}
    return 0;
}
