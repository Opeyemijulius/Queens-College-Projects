#include <iostream>
using namespace std;
int main () {
    double num; //Declaring a variable num//
    cout << "Enter a number and press ENTER: ";//Prompting the user to enter a number so its square can be calculated//
    cin >> num; //Storing the input value in the program//
    cout << "The square of" << " " << num << " " << "is" << " " << num * num << endl; //We calculate the square of num and print it//
    return 0;
}