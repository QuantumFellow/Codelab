#include <iostream>
using namespace std;

int main() {
	float l1;
	float l2;
	float l3;
	cout << "Enter three lengths" << endl;
	cin >> l1 >> l2 >> l3;
	if (l3 <= l1 + l2 || l2 <= l1 + l3 || l1 <= l2 + l3) {
		if (l1 == l2 && l1 == l3 && l2 == l3) {
			cout << "Equilateral" << endl;
		}
		else if (l1 == l2 || l1 == l3 || l2 == l3) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Not a Triangle" << endl;
	}
}
