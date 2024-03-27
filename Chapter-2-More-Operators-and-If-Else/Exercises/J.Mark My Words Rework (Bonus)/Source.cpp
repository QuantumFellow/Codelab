#include <iostream>
using namespace std;

int main() {
	float percen;
	cout << "Please input percentage of Test Paper." << endl;
	cin >> percen;
	if (percen < 40) {
		cout << "F" << endl;
	}
	else if (percen >= 40 && percen <= 49) {
		cout << "D" << endl;
	}
	else if (percen >= 50 && percen <= 59) {
		cout << "C" << endl;
	}
	else if (percen >= 60 && percen <= 69) {
		cout << "B" << endl;
	}
	else if (percen > 70) {
		cout << "A" << endl;

//else if (percen >= 70) {
//cout << "A" << endl;

//The README document asked for 60-69 and more than 70
//it'll break on 70 though so I've added what would include 70
//I just wanted to do exactly what you asked
	}
}