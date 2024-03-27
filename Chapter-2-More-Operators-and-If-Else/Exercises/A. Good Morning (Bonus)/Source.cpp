#include <iostream>
using namespace std;

int main() {
    int Time = 3; //declare and initialise variable for time
    if (Time <= 12) {
        cout << "Good Morning" << endl;
    }
    else if (12 < Time <= 18) {
        cout << "Good Afternoon" << endl;
    }
    else if (18 < Time <= 21) {
        cout << "Good Evening" << endl;
    }
    else if (21 < Time <= 24) {
        cout << "Good Night" << endl;
    }
    else {
        cout << "Time not valid." << endl;
    }
    if (Time > 12) { //check if 'currentTime' is greater than 12
        cout << "It's PM" << endl; //output PM message
    }
    else { //else 'currentTime' must be less than 12
        cout << "It's AM" << endl; //output AM message
    }
    return 0;
}

//added some < x <= so that it wont print everything before that line