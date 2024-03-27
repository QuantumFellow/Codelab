#include <iostream>
using namespace std;

int main() {
	float tmoney; //just total money
	float change;
	float needed;
	cout << "How much money do you have? Please type in format of __.__" << endl;
	cin >> tmoney;
	if (tmoney >= 25) {
		cout << "You can buy the game" << endl;
		change = tmoney - 25;
		cout << "You'll have " << change << " remaining." << endl;
	}
	else {
		needed = 25 - tmoney;
		cout << "I need to save " << needed << endl;
	}
	return 0;
	

}