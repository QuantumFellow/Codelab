#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 12; i++) {  //carries out 12 times
        for (int j = 1; j <= 12; j++) {//does it 12 times for every one outer loop
            cout << i << " x " << j << " = " << i * j << endl;  //times them together each time nested loop is carried out
        }
        cout << endl;
    }
}