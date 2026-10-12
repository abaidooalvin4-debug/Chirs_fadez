#include <iostream>

using namespace std;
int main() {
    for (int i = 1; i < 6; i++){
        cout << "Hello world " << " ";
    }
    cout << endl;
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 0; i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    int x;
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        cout << i << "Hellow world" << " ";
    }
    cout << endl;
    
    for (int i = 1; i <= x; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = x; i >= 1; 1--){
        cout << i << " ";
    }
    cout << endl;
        
    return 0;
}
