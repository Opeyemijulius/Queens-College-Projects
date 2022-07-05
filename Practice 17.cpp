#include <iostream>
using namespace std;
int main () {
    int i = 0, n; // Declaring our 'i' variable and initializing it to be 0 because the problem wants us to print even numbers only

    cout << "Enter a number and press ENTER: " ; // Prompts user for a number input
    cin >> n; // Collect and Store that number in 'n' variable

// If n is even... but it does not even matter if n is even or odd. The program ONLY wants us to print out even numbers from 0 to n.
    while (n >= i) { // While n is less than or equal to i with i being 0 or starting from 0, we want the program to print values from i to n
        cout << i << " "; // Print i + 2
        i = i + 2; 
    }
   
    return 0;
}


//EXERCISE_2.2.3 : Alter the example so that it prints only EVEN numbers as in 0, 2, 4.
// How do we know when a number is even? When it is perfectly divisible by two. For this problem we can use the % operator to divide n perfectly by 2. If n can perfectly be divided by two with a 0 remainder than n is even. Else n is odd.
// But we may not even need to check if the number is even. We can just add 2. And the progam will print numbers after i, 0 and stops at n.