#include <iostream>
using namespace std;

int main() {
	string vehicle[] = { "Car", "Train", "Tractor", "Skiff", "Tank" }; //shorthand initialising array
	cout << vehicle[3] << endl; //printing single arrays
	cout << vehicle[0] << endl;
	cout << vehicle[2] << " " << vehicle[4] << endl; //wanted to add the space
	cout << vehicle[0] << " " << vehicle[3] << " " << vehicle[1] << endl; //car skiff train printed
}