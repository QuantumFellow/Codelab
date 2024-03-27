#include <iostream>
using namespace std;

int main() {
	int sides;
	cout << "Please input number of sides 3-10" << endl;
	cin >> sides;
	if (sides == 3) {
		cout << "Triangle" << endl;
	}
	else if (sides == 4) {
		cout << "Quadrilateral" << endl;
	}
	else if (sides == 5) {
		cout << "Pentagon" << endl;
	}
	else if (sides == 6) {
		cout << "Hexagon" << endl;
	}
	else if (sides == 7) {
		cout << "Septagon" << endl;
	}
	else if (sides == 8) {
		cout << "Octagon" << endl;
	}
	else if (sides == 9) {
		cout << "Nonagon" << endl;
	}
	else if (sides == 10) {
		cout << "Decagon" << endl;
	}
	else {
		cout << "invalid input" << endl;
	}
	}