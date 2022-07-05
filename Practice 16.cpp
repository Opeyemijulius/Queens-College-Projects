#include <iostream>
using namespace std;
int main () {
    int i = 1, n1; // Declaring the variables

    cout << " Enter a number and press ENTER: "; // Prompt user for a number 
    cin >> n1; // Store input number into n1 variable

    while (n1 >= i) { // While the input is greater than 1 which we initialized i to be,
        cout << n1 << " "; // Print n1
        n1 = n1 - 1; // n1 if condition is TRUE will be printed first then, again and again in decreasing order from n1 to 1. 
    }
    return 0;
}


//EXERCISE_2.2.2 : Alter the example so that it prints all the numbers from n to 1 in REVERSE order, as in 5, 4, 3, 2, 1.

// FOR Line 9, while the input, let's say 5 is greater than 1, print 5, 5-1, 4-1, 3-1 and so on and the loop does that for you right. But if we wanted it to print in increasing order we have to say that 1 is less than 5 I mean it does not matter because the line that changes thing is line 11 because it is telling the program to subtract 1 each time.