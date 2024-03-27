#include <iostream>
using namespace std;

int main() {
    int numberOne = 50;
    float numberTwo = 7;
    float numberThree = numberOne / numberTwo; 
    cout << numberThree << endl; 

    return 0;
}

//I figured out via Stack Overflow that in order for the sum to
//return a double or a float that one of the variables had to
//also be a float or a double. Either of those could be used for the code to work
//Now it outputs a decimal number as expected...