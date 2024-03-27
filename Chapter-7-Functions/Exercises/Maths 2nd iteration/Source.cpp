#include <iostream>
using namespace std;



void displayMenu();
void randomInt(int diff, int diff2);
char decideOperation();

int main() {
    srand(time(NULL));
	displayMenu();
    char thingy = decideOperation();
    cout << thingy << endl;
}

void displayMenu() {
    int var1{};
    int var2{};
    cout << "Please select difficulty: " << endl;
    cout << "1. Easy\n2. Medium\n3. Hard" << endl;
    cin >> var1;
    switch (var1) {
    case 1:
        var1 = 9;
        var2 = 1;
        break;
    case 2:
        var1 = 99;
        var2 = 10;
        break;
    case 3:
        var1 = 9999;
        var2 = 1000;
        break;
    }
    randomInt(var1, var2);
}

void randomInt(int diff, int diff2) {
    cout << diff << diff2 << endl;
    int random;
    int rand2;
    random = (rand() % diff) + diff2;
    rand2 = (rand() % diff) + diff2;
    cout << random << "\n" << rand2 << endl;
}

char decideOperation() {
    char choice;
    int digit;
    digit = (rand() % 2) + 1;
    if (digit == 1) {
        choice = '-';
    }
    else {
        choice = '+';
    }
    return choice;
}
n