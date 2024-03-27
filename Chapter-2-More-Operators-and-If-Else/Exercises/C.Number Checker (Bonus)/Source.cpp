#include <iostream>
using namespace std;

int main() {
	float num;
	cout << "Input number" << endl;
	cin >> num;
	if (num == 0) {
		cout << "Your number is 0" << endl;
	}
	else if (num > 0) {
		cout << "Your number is positive" << endl;
	}
	else if (num < 0) {
		cout << "Your number is negative" << endl;
	}
	else
		cout << "insufficient input" << endl;
}