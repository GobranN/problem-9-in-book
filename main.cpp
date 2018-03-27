#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int terms;
        double pi = 1;
        char restart = 'N';
        // Do the entire program as long as the user wants
        do
        {
         // Set pi back to 1 if user wants to restart
         if ((restart == 'Y') || (restart == 'y'))
             pi = 1;
         cout << "Input the number of terms to approximate pi to.  The number of terms must be greater than zero." << endl;
         cout << ">> ";
         cin >> terms;
         // The number of terms must be greater than 0 for approximation purposes
         if (terms > 0)
         {
             // The series approximates to the value terms times
             for (int i = 1; i <= terms; i++)
             {
                 pi += 4 * (pow(-1,i))/((2*i)+1);
             }
             // Once loop is complete, add 3 for final pi value
             pi += 3;
             cout << "The approximated value of pi is: " << pi << "." << endl << endl;
             // Allow the user to restart program
             cout << "Enter Y to start a new approximation or any other key to terminate the program." << endl;
             cout << ">> ";
             cin >> restart;
             // A new line is inserted for spacing if the user wants to restart
             cout << endl;
         }
         // Stop the program if the user enteres an invalid value.
         else cout << endl << "You did not enter a valid value.\n" << endl;
        } while ((restart == 'Y') || (restart == 'y'));

        return 0;
    }
