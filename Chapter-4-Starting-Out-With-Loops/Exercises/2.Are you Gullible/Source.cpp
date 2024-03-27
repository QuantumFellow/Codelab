#include <iostream>
using namespace std;

int main() {
	int count = 0; //count for times in while loop
	int inp = 1; //initialising variables
	while (inp != count) { // continues as long as inp doesnt = count
		count++; //adds to count
		cout << "enter any number but " << count << endl;
		cin >> inp; //user input
		if (count == 10) {
			cout << "Wow you're more patient than I am. You win." << endl;
			return 0;
		}
	}
	cout << "Hey You weren't supposed to enter " << count << endl;
	return 0;
}