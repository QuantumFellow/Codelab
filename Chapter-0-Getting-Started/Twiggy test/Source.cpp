#include <iostream>
#include <string>
using namespace std;

int main() {
	int i, count;
	string checkint;
	int num;
	cout << "Input number (Integer)" << endl;
	cin >> checkint;
	for (i = 0; i < checkint.length(); i++) {
		if (isdigit(checkint[i]) == false) {
			count = 1;
			break;
		}
		else {
			count = 0;
		}
		int num = stoi(checkint);
		if (count == 0) {
			if (num % 2 == 0) {
				cout << "Even" << endl;
			}
			else {
				cout << "Odd" << endl;
			}
		}
		else {
			cout << "Not an integer" << endl;
		}
	}
	return 0;
}