// This program calculates how far a car can travel on one tank of gas.

#include <iostream>

using namespace std;

int main()

{
// intialize variable to hold desired amount of cookies
    int desiredCookies;

//initialize variables to hold ingredient amounts and multiplier
    double sugarNeeded, butterNeeded, flourNeeded, multiplier;

// prompt user for desired number of cookies
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

// calculate the multiplier and ingredient amounts
    multiplier = desiredCookies / 48.0;
    sugarNeeded = 1.5 * multiplier;
    butterNeeded = 1.0 * multiplier;
    flourNeeded = 2.75 * multiplier;

// display the results of calculations
    cout << "You need " << sugarNeeded << " cups of sugar." << endl;
    cout << "You need " << butterNeeded << " cups of butter." << endl;
    cout << "You need " << flourNeeded << " cups of flour." << endl;

    return 0;

}