#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Input number (Integer)" << endl;
	cin >> num;
	if (num % 2 == 0) {
		cout << "Even Number" << endl;
	}
	else if (num % 2 != 0) {
		cout << "Odd Number" << endl;
	}
	else {
		cout << "Invalid input try again." << endl;
	}
}