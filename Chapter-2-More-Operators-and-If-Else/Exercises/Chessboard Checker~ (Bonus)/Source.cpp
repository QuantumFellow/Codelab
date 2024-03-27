#include <iostream>
#include <string>
using namespace std;

int main() {
	string row;
	string col;
	string name;
	cout << "Please enter coordinate in the format a1 etc." << endl;
	cin >> name;
	col = name.substr(0, 1);
	row = name.substr(1, 2);
	int numr = stoi(row);
	if (col == "a" || col == "c" || col == "e" || col == "g" ) {
		if (numr % 2 == 0) {
			cout << "Square is White.";
		}
		else {
			cout << "Square is Black.";
		}
	}
	else if (col == "b" || col == "d" || col == "f" || col == "h" ) {
		if (numr % 2 == 0) {
			cout << "Square is Black.";
		}
		else {
			cout << "Square is White.";
		}
	}
	else {
		cout << "invalid input";
	}

	//initially I had a && in the if but a nested if statement ennded up looking tidier
	//tried convering letters to numbers but was unsuccessful so made long ifs
	//if (numc % 2 == 0 && numr % 2 == 0 || numc % 2 != 0 && numr % 2 == 0) {
	//	cout << "Square is black." << endl;
	//}
	//else if (numc % 2 == 0 && numr % 2 != 0 || numc % 2 != 0 && numr % 2 != 0) {
	//	cout << "Square is white" << endl;
	//}



}