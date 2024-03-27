#include <iostream>
using namespace std;

void sum(int a, int b, int c) { //declaring function
	int total = a + b + c;
	cout << total << endl;
}

int main() {
	sum(1, 2, 3);
}