#include <iostream>
using namespace std;


int main() {
    int age = 19; //declare and initialise variable to store age
    const int vote = 18;
    if (age >= 18) //check if age is greater than or equal to 18
    {
        cout << "Congrats you can vote!" << endl;
    }
    else {
        cout << "Cannot vote" << endl;
    }

    return 0;
}