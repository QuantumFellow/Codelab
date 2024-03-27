#include <iostream>
using namespace std;

int main() {
	int inparray[10]; //declared array that has 10 elements
	for (int i = 0; i < 10; i++) { //loop runs 10 times
		cout << "Delare integer for input " << i+1 << endl;
		cin >> inparray[i]; //gets input for arrays
	}
	for (int j = 0; j < 10; j++) { //loop runs 10 times
		cout << inparray[j] << endl; //print whole array
	}
}