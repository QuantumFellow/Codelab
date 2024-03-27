#include <iostream>
using namespace std;

int points = 0;
int counting = 0;

int randomInt(int diff, int diff2);
void displayProblem(int val1, int val2);

void displayMenu() {
    int var1;
    int var2;
    cout << "Please select difficulty: " << endl;
    cout << "1. Easy\n2. Medium\n3. Hard" << endl;
    cin >> var1;
    switch (var1) {
    case 1:
        var1 = 9;
        var2 = 1;
        randomInt(var1, var2);
        break;
    case 2:
        var1 = 99;
        var2 = 10;
        randomInt(var1, var2);
        break;
    case 3:
        var1 = 9999;
        var2 = 1000;
        randomInt(var1, var2);
        break;
    }

}

int randomInt(int diff, int diff2) {
    int random;
    int rand2;
    random = (rand() % diff) + diff2;
    rand2 = (rand() % diff) + diff2;
    displayProblem(random);
    return rand2;
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
    /************************
    * displayProblem() takes in three ints etc, then displays problem etc.  
    *********************************/
}
int isCorrect(int val4, int val5);
int main();

int displayProblem(int val1) {
    int ans;
    counting++;
    int val2 = randomInt();
    int val3 = decideOperation();
    if (counting > 2) {
        system("cls");
        main();
    }
    else {
        cout << val1 << val3 << val2;
        cin >> ans;
        return ans;
    }

}

int isCorrect(int val4, int val5) {
    if (val4 == val5) {
        points+=10;
    }
    else {
        void displayProblem();
    }
    return 0;
}

void displayFinalResults() {
    cout << points << endl;
}

int main() {
    displayMenu();

}










