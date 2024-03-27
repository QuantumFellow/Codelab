#include <iostream>
using namespace std;

int main() {
	float purch;
	float sale;
	float misc;
	cout << "Please enter the purchase price" << endl;
	cin >> purch;
	cout << "Please enter the sale price" << endl;
	cin >> sale;
	misc = sale - purch;
	if (misc > 0) {
		cout << "You've made a profit of " << misc << " pounds and pence." << endl;
	}
	else if (misc == 0) {
		cout << "You've broken even." << endl;
	}
	else if (misc < 0) {
		cout << "You've made a loss of " << misc << " pounds and pence." << endl;
	}

}