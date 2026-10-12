/* This program will have variables to store values related
 * to our textbook, staring out eith c++ by Tony Gaddis.
 * The program will print the values from
 * the variables
 */

#include <iostream>

using namespace std;

int main() {
    int current_page;
    int total_pages = 1346;
    string title = "starting Out with c++";
    string author_lastname;
    char author_first_intitial = 'T';
    float price = 51.75;
    
    
    // cout << current page;
   
    
    
    
    current_page = 34;
    
    // cout << current_page;
    cout << "we are on page " << current_page
         << " of " << total_pages << " pages. " << endl;
    current_page = 60;
    cout << "A week later, we are now on page " << current_page << endl;
    cout << "Textbook info" << endl;
    cout << "Title:\t" << title << endl;
    cout << "Author:\tT. Gaddi"<< endl;
    cout << "Price:\t$51.75" << endl;
    
    return 0;
}

