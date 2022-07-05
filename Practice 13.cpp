#include <iostream>
using namespace std;
int main () 
{
    int n;
    cout << "Enter a whole number and press ENTER:" << endl; //Prompt user to give input n
    cin >> n; // Store n into the program

    if (n % 7 == 0) 
    {
        cout << "The number," << " " << n << ", " << "is divisible by 7." << endl;
    }
    else {
        cout << "The number," << " " << n << ", " << "is NOT divisible by 7." << endl;
    }
// The % operator divides our input by 7 and tests if the remainder of this division is 0. If it is then that input can be perfectly be divided by 7 since the remainder is 0. If the remainder is any other number then that number is not divisible by 7.

//using this mathematical formula to show if any number a user inputs, the program will divide it by 7 and if it divides by 7 and results in a whole number, then that number inputed is divisible by 7.

    return 0;
}