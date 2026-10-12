#include <iostream>
#include <string>

using namespace std;

int main() {
    int street_number;
    string street_name;
    string city;
    char state_abbrev1, state_abbrev2;
    int zip_code;
    cout <<"street number: ";
    cin >> street_number;
    cout << "street name: ";
    cin.ignore();
    
    getline(cin, street_name);
    cout << "City: ";
    getline(cin, city);
    cout << "Type two characters for the state abbrevation: ";
    cin >> state_abbrev1 >> state_abbrev2;
    cout << "zip_code: ";
    cin >> zip_code;
    cout << street_number << " " << street_name << endl;
    cout << city << ", " << state_abbrev1 << "." << state_abbrev2 << " . " << zip_code << endl;
    
    
    return 0;
}
