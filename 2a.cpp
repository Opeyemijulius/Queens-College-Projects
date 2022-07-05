#include <iostream>
using namespace std;

int main() {

    //Declare an integer
    int num;

    //Print a message for user to input an integer
    cout << "Enter an integer:" << endl;
    cin >> num;

    // If the input is a positive number, print "___ is positive." Else, print " ___ is negative"
    if (num > 0)
        cout << num << " is positive." << endl;
    else
        cout << num << " is negative." << endl;

    return 0;
}

 /* Continue to code below */