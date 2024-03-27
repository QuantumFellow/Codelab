#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 1, z = 0;

    for (int i = 1; i <= 55; i++) {  //carries out 55 times
        if (i == 1) {
            cout << x << " ,"; //prints first two values so can add them later
            continue;
        }
        else if (i == 2) {
            cout << y << " ,";
            continue;
        }
        z = x + y;
        x = y; //moves all the numbers along by 1 space
        y = z;

        cout << z << ", ";
    }
    return 0;
}
