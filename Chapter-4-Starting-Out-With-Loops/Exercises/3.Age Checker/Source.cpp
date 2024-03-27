#include <iostream>
using namespace std;

int main() {
	int inp; // initialising variable
	cout << "Input age" << endl;
	cin >> inp;
	while (cin.fail()) { //if not an integer
		cout << "You've entered an invalid input" << endl;
		cin.clear();
		cin.ignore(100, '\n'); //ignoring next few spaces
		cin >> inp;
	}
	if (inp > 120 || inp < 0) { //if input is larger than 120 or less than 0
		cout << "You're too old/young and unrealistic..." << endl;
	}
	else {
		cout << "Accepted" << endl;
	}

}
