#include <iostream>
using namespace std;

int main() {
	int late;
	float money;
	cout << "How many minutes late is your friend?" << endl;
	cin >> late;
	cout << "How much money do you have?" << endl;
	cin >> money;
	if (late >= 15) {
		if (money > 3) {
			cout << "Buy a coffee" << endl;
		}
		else {
			cout << "Go for a walk around town" << endl;
		}
	}
	else {
		cout << "Sit in park and wait (Probably grumbling)" << endl;
	}
}