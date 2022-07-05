#include <iostream>
using namespace std;
int main () {
    double x; //First step is to declare our variable//
    cout << "Enter a number and press ENTER: " << endl; //Prompt user for an input//
    cin >> x; //Store the variable we declared so we can do stuff with it later//
    cout << "The cube of" << " " << x << " is" << " "<< x * x * x << endl; 
return 0;
}