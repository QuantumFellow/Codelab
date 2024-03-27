#include <iostream>
using namespace std;

int main() {
    int myInt = 0; //Part A
    int counter = 0;
    int counter2 = 0;
    int counter3 = 0;

    while (myInt <= 5) { //less than or equal to 5
        cout << myInt << endl;
        myInt++; //add 1
    }

    int num1;
    int num2;
    cout << "Enter first number and number to count up to." << endl;
    cin >> num1 >> num2;

    while (num1 <= num2) {
        cout << num1 << endl; //Part B and C
        if (num1 % 2 == 1) {
            counter++; //keeps track of odd numbers
        }
        else {
            counter2++; // keeps track of even
        }
        num1++;
        counter3++;
    }
    cout << "There are " << counter << " odd numbers and " << counter2 << " even numbers" << endl;

    num1 = (num2 - counter3) +1 ; //I couldnt find a way to remember the first input so implemented a counter to keep track to reverse the maths
    counter3 = 0;
    while (num1 <= num2) {
        cout << num1 << endl; //Part B and C
        num1++;
        counter3++;
    }

    num1 = (num2 - counter3) + 1; //Part D reset num1 again

    for (num2 >= num1; num2--;) {
        cout << num2 << endl;
        if (num2 < num1 + 1) { //if num2 hits starter value program ends
            break;
        }
        else {
            continue;
        }
    }

    return 0;
}