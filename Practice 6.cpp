#include <iostream>
using namespace std;

int main() {
   int userNum;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   cout << "Your input is " << userNum << endl;
   cout << "The Square Root of " << userNum << " is " << (userNum * userNum) << "." << endl;
   cout << "The Cube Root of " << userNum << " is " << (userNum * userNum * userNum) << "." << endl;

   int userNum2;

   cout << "Enter a second integer:" << endl;
   cin  >> userNum2;

   cout << "Your input is " << userNum2 << endl;
   cout << "The sum of " << userNum << " + " << userNum2 << " = " << userNum + userNum2 << endl;
   cout << "The product of " << userNum << " x " << userNum2 << " = " << userNum * userNum2 << endl;

    return 0;
}
 /* Continue your code below */
