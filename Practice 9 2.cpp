#include <iostream>
using namespace std;
int main (){
    double ftemp;
    cout << "Input a Fahrenheit temperature and press ENTER:"; //Prints and prompts the User to give a value in Farenheit so the program can convert.
    cin >> ftemp; // the value is now stored in the program as ftemp. We declared the variable earlier on //
    cout << "Celsius temperature is " << " " << (ftemp - 32) / 1.8 << endl; //We perform the calculation in this sentence AND we print it as well.
    return 0; 
}