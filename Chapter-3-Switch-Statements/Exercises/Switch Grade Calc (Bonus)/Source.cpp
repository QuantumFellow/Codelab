#include <iostream>
using namespace std;

int main() {
	string name;
	int mark;
	char inp;
	cout << "Whats your name and mark?" << endl;
	cin >> name >> mark;
	if (mark < 40) {
		inp = 'F';
	}
	else if (mark > 40 && mark < 50) {
		inp = 'E';
	}
	else if (mark > 50 && mark < 60) {
		inp = 'D';
	}
	else if (mark > 60 && mark < 70) {
		inp = 'C';
	}
	else if (mark > 70 && mark < 80) {
		inp = 'B';
	}
	else if (mark > 80)
		inp = 'A';
    //else if (mark >= 80) {
	//the readme document didnt include an answer for 80 as an input
	switch (inp) {
	    case 'A':
			cout << "A" << endl;
			break;
		case 'B':
			cout << "B" << endl;
			break;
		case 'C':
			cout << "C" << endl;
			break;
		case 'D':
			cout << "D" << endl;
			break;
		case 'E':
			cout << "E" << endl;
			break;
		case 'F':
			cout << "F" << endl;
			break;
		default:
			cout << "Invalid" << endl;
	}
	return 0;
}