#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char inp; //variable for user answer;
    cin >> inp; //get user input
    switch (inp) { //evaluate expression
        case 'Y': //case for Y
        case 'y':
            cout << "Continuing Game" << endl;
            break;

        case 'N': //case for N
        case 'n':
            cout << "Ending Game" << endl; //cout message if user enters N
                break;
        default: //default case
            cout << "Invalid Input" << endl; //default message if neither Y or N entered
        }
    return 0;
}