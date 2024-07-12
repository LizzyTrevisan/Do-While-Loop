// Do-While loop functions.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;


int main()
{
    int input = 0;
    int sum = 0;
    char answer;

    do {

        do {//loop will not be executed once the input is 0
            cout << "Enter a number: ";
            cin >> input;
                if (input != 0) {
                    sum += input;
                }

        } while (input != 0);
        cout << "The summation of the numbers is: " << sum << endl;
        sum -= sum; // reset the sum


        do { //Ask user to continue or not the Sum of Numbers. Also if the user types anything besides "Y" or "N" will loop to the question again.
            cout << "Calculate another sum? [Y/N]: ";
            cin >> answer;
        } while (answer != 'Y' && answer != 'N');
        cout << endl; //The whitespace among summations.

    } while (answer == 'Y');

    return 0;
}
