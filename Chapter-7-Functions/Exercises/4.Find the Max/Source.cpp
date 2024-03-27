#include <iostream>
using namespace std;

int max_two(int var1, int var2) { //initialising function
	int biggest;
	if (var1 > var2) { //if first value is bigger
		biggest = var1; //return value is var 1
	}
	else {
		biggest = var2; //return value is var 2
	}
	return biggest; //returns value
}

int main() {
	int inp1;
	int inp2; //variables
	cout << "Enter two numbers: " << endl;
	cin >> inp1 >> inp2; //gets input
	int returned = max_two(inp1,inp2); //returned becomes returned value
	cout << returned << endl; //prints returned value
	return 0;
}