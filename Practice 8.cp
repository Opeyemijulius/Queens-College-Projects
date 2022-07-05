#include <iostream>
using namespace std;
int main () {
    double x; // Declaring our variable "x"//
    cout << "Input a number and press ENTER" << " " << endl; //Prompt the user to input a value so the program can find its square//
    cin >> x;
    //Now we can calculate the square of the input in the background//
    cout << "The square of" << " " << x << " " <<"is" << " " << x * x << endl; // The calculation of the square of the inputed number.//
    // Test case 3 would be like 3 x 3 = 9. 
    return 0;
}