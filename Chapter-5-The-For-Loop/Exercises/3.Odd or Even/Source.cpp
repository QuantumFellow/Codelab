#include <iostream>
using namespace std;

int main() {
	for (int i = 20; i <= 24; i++) { //adds to 24 in increments of 1
		if (i % 2 == 0) { //if divided by two and leaves no remainder its even
			cout << i << " Even" << endl;
		}
		else { //otherwise number is odd
			cout << i << " Odd" << endl;
		}
	}

}
