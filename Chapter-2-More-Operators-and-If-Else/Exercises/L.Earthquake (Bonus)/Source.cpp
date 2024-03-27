#include <iostream>
using namespace std;

int main() {
	float inp;
	cout << "Input magnitude" << endl;
	cin >> inp;
	if (inp < 2) {
		cout << "Mirco" << endl;
//if (inp < 2) {
//	cout << "Micro" << endl;
//}

//I figured you meant micro but the README document said 'mirco'
//so thats what ive put
	}
	else if (inp >= 2 && inp < 3) {
		cout << "Very Minor" << endl;
	}
	else if (inp >= 3 && inp < 4) {
		cout << "Minor" << endl;
	}
	else if (inp >= 4 && inp < 5) {
		cout << "Light" << endl;
	}
	else if (inp >= 5 && inp < 6) {
		cout << "Moderate" << endl;
	}
	else if (inp >= 6 && inp < 7) {
		cout << "Strong" << endl;
	}
	else if (inp >= 7 && inp < 8) {
		cout << "Major" << endl;
	}
	else if (inp >= 8 && inp < 10) {
		cout << "Great" << endl;
	}
	else if (inp > 10) {
		cout << "Meteoric" << endl;
	}
//	else if (inp >= 10) {
//cout << "Meteoric" << endl;
//	}

//This is the fixed program but the code the README document wanted
//would result in a break when the user inputs 10. The document
// asks for 8 to less than ten and skips to more than 10. I figured
// I should follow exactly what the document asked for but 
//here is the improved code
}