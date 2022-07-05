#include <iostream>

using namespace std;

int main()
{
    double ctemp, ftemp;

    cout << "Input a Celsius temperature and press ENTER:" << " " << endl; //Prompting the User to input ANY Celsius temperature//

    cin >> ctemp ; // The User's input, does not matter what value, will now be stored into our first variable "ctemp". Now we can do something interesting with it. The question I have now is... now that I have asked the user to put in a temp and collected that data and stored it into "ctemp" what do we want to do next?//

    //I think we want the program to convert ctemp into ftemp using the formula from the example.//
    ftemp = (ctemp * 1.8) + 32 ; //This formula was given in the example. We did not need to use "==" we just wrote it as an equation and the complier understands//
    cout << "Fahrenheit temperature is" << " " << ftemp << endl;
    return 0;
}
