#include <iostream>
using namespace std;

int main () {
    int i = 1, n1 = 0, n2 = 0; // Initializing 1

    cout << "Enter a number and press ENTER: " << endl; // Prompt user for a positive integer input
    cin >> n1; // Store input in variable 

    cout << "Enter another number and press ENTER: " << endl; // Prompts user for another positive integer input
    cin >> n2; // Store seconf input into variable
    
    while (n1 <= n2) { // While 4 is less than 12,
        cout << n1 << " "; // Print 4 + 1 till 12
        n1 = n1 + 1; // Progressing by +1 until the contition in line 14 is NOT true.
    }

    return 0;
}

/* Some notes that helped me think through the problem */


// While i is less than the first number,
// Print the first number 
// And then add 1 to the first number UNTIL i is no longer less than or equal to the first number
// Store those two numbers in n1 and n2
// Prompt user to give 2 unique numbers that are not equal to each other
// Declared two variables, initialized both variables
// This program prints numbers from n1 to n2. Which are both user inputs. So for example if I want to get the program to print 3 - 10. It should print " 3, 4, 5, 6, 7, 8, 9, 10."

// EXERCISE_2.2.1 : Write a program to print all the numbers from n1 to n2, where n1 and n2 are two numbers specified by the user. 