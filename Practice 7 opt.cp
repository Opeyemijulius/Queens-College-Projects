#include <iostream>
using namespace std;
int main () {
    double ctemp; // Declaring one variable. Celsius temperature in which the user will input//
    cout << " Input a Celsius temperature and press ENTER" << " " ; //Print what the User will see//
    cin >> ctemp; //where the User will enter a Celsius temperature value //
    cout << "Fahrenheit temperature is" << " " << (ctemp * 1.8) + 32 << endl; //Prints what ftemp is without using ftemp as a seconf variable
    return 0;
}