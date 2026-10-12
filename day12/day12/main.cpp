// Summation
// Find the total of the integers from 1 to x
#include <iostream>
using namespace std;

int main() {
    int x;
    int total = 0;
    
    cout << "Type the positive whole number for x: ";
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        total = total + i;
    
    }
    cout << "The total from 1 to " << x << " is " << total << " . " << endl;
    
    return 0;
}
