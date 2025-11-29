#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int nrtoguess = rand()% 100+1;
    int userguess;
    int nroftries = 0;
    int choice;
    cout << "Welcome to the Number Guessing Game!" << '\n';
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Please select the desired difficulty:" << endl;
    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (5 chances)" << endl;
    cout << "3. Hard (3 chances)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    int maxattempts=0;
    if (choice == 1) {
        maxattempts = 10;
        cout << "Great! You have selected the Easy difficulty" << endl;
    }
    else if (choice == 2) {
        maxattempts = 5;
        cout << "Great! You have selected the Medium difficulty" << endl;
    }
    else if (choice == 3) {
        maxattempts = 3;
        cout << "Great! You have selected the Hard difficulty" << endl;
    }
    while (nroftries < maxattempts)
    {
        cout << "Enter your choice: ";
        cin >> userguess;
        nroftries++;

        if (nrtoguess > userguess)
        {
            cout << "Incorrect! The number is greater than " << userguess << "." << endl;
        }

        else if (nrtoguess < userguess)
        {
            cout << "Incorrect! The number is less than " << userguess << "." << endl;
        }

        else
        {
            cout << "Congratulations! You guessed the correct number in " << nroftries << " attempts.";
        }





    }
}
