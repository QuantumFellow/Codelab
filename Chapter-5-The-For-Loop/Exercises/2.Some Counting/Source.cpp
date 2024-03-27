#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i <= 50; i++) {
		cout << i << endl;
	}

	for (int i = 50; i >= 0; i--) {
		cout << i << endl;
	}

	for (int i = 30; i <= 50; i++) { //begins at 30 and adds to 50
		cout << i << endl;
	}

	for (int i = 50, inc = 1; i >= 10; i-= 2) { //I struggled finding the -= bit online will - in increments of 2
		cout << i << endl;
	}

	for (int i = 100; i <= 200; i+= 5) { //adds 5
		cout << i << endl;
	}
}
// had to use an online compiler to test as the built in debugger wasnt working
