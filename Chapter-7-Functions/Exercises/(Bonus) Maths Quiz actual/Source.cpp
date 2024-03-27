#include <iostream>
#include <string>
#include<tuple>
#include <Windows.h>
using namespace std;

//please READ I cannot seem to get this right and now my computer will simply not run the compiler, I've tried the struct command, the tuple, trying to return values, to a display function but that wont work either, this is as far as I could've gotten
//without more time so at least look at the code's theory

int counting = 0; //set up counter for iterations
int points = 0; //points established

void displayMenu();
int randomInt1(int diff, int diff2); //all the funtions expected
char decideOperation();
int displaypoint();

int main() {
    srand(time(NULL)); //random seed gen
    displayMenu();
    displaypoint();
    return 0;
}

void displayMenu() { //uses switch from input to determine parameters for the random gen according to difficulty entered
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
    randomInt1(var1, var2);
}

char decideOperation() { //randomly decides + or -
    char choice;
    int digit;
    digit = (rand() % 2) + 1; //picks num between 1&2
    if (digit == 1) {
        choice = '-';
    }
    else {
        choice = '+';
    }
    return choice; //returns for use
}

int randomInt1(int diff, int diff2) {
    int ans{};
    int total;
    char var = decideOperation();
    int random = (rand() % diff) + diff2; //two rand num generated
    int random2 = (rand() % diff) + diff2;
    cout << random << var << random2 << endl;
    if (var == '+') {
        total = random + random2;
    }
    else {
        total = random - random2; //does calc according to data recieved
    }
    cin >> ans;
    if (counting < 2) {
        if (ans == total) {
            cout << "correct" << endl;
            points += 10;
        }
        else {
            cout << "wrong" << endl;
        }
    }
    main(); //repeats code
    return 0;
}

int displaypoint() { //prints the points
    int a = points;
    cout << points;
    return points;
}
 
