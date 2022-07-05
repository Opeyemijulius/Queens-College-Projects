#include <iostream>
using namespace std;
int main () {
    int I = 1, N = 0; //Declaring I and N as our variables for this example

    cout << "Enter any number and press ENTER:" << endl; //Prints a message for the user
    cin >> N; //Stores the number into our variable, N
     //Setting I equal to 1.

    while (I <= N) { // While I is less than N, we want the program to...
       cout << I << " " ; //So basically, while 1 is less than the input N, Print I on every new line as it is added to N but not forever because the condition only wants I when I is less than N or equal to N
       I = I + 1 ; // Add 1 to I so I can advance 1 number upwards, ending at N the original input.
    }

    return 0;
}