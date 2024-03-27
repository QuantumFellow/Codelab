#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {  //carries out 7 times
        for (int j = 0; j < 7; j++) {//does it 7 times for every one outer loop
            cout << "*";
        }
        cout << endl;
    }
}