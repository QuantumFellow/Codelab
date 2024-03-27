#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	float height;
	cout << "Please input your age." << endl;
	cin >> age;
	cout << "Please input your height in in metres." << endl;
	cin >> height;
	if (age >= 5 && height > 0.6) {
		cout << "You are able to ride the ride." << endl;
	}
	else {
		cout << "Sorry you are unable to ride the ride." << endl;
	}

}