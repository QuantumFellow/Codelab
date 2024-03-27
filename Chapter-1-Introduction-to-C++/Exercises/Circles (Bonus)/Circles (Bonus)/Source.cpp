#include <iostream>
using namespace std;


int main() {
	float radius;
	const double pi = 3.141592654;
	float area;
	float circum;
	cout << "Enter radius" << endl;
	cin >> radius;
	area = pi * (radius * radius);
	circum = pi * (2 * radius);
	cout << "Your circle has a radius of " << area << " and a circumference of " << circum << endl;
	return 0;
}