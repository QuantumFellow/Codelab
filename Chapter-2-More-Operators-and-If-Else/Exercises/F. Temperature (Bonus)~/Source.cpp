#include <iostream>
#include <string>
using namespace std;

int main() {
	float temp;
	char measureT;
	char measureF;
	const float Kelvin = 273.15;
	float newV;
	cout << "Please enter the temperature." << endl;
	cin >> temp;
	cout << "Is this in Kelvin (Type k), Faranheit (Type f) or Celcius (Type c)" << endl;
	cin >> measureT;
	cout << "What do you want to convert to? (k, f or c)" << endl;
	cin >> measureF;
	if (measureT == 'k' && measureF == 'f') {
		newV = 1.8 * (temp - 273.15) + 32;
		cout << "Your conversion from " << temp << " K to F is " << newV << " Faranheit." << endl;
	}
	else if (measureT == 'f' && measureF == 'k') {
		newV = (temp + 459.67) * 5 / 9;
		cout << "Your conversion from " << temp << " F to K is " << newV << " Kelvin." << endl;
	}
	else if (measureT == 'c' && measureF == 'f') {
		newV = (temp * 9 / 5) + 32;
		cout << "Your conversion from " << temp << " C to F is " << newV << " Faranheit." << endl;
	}
	else if (measureT == 'c' && measureF == 'k') {
		newV = temp + Kelvin;
		cout << "Your conversion from " << temp << " C to K is " << newV << " Kelvin." << endl;
	}
	else if (measureT == 'k' && measureF == 'c') {
		newV = temp - Kelvin;
		cout << "Your conversion from " << temp << " K to C is " << newV << " Celcius." << endl;
	}
	else if (measureT == 'f' && measureF == 'c') {
		newV = (temp - 32) * 5 / 9;
		cout << "Your conversion from " << temp << " F to C is " << newV << " Celcius." << endl;
	}
	else {
		cout << "There appears to be an error with your inputs please ensure all inputs are lower case and reload the program to try again." << endl;

	}
}
//using else if statements i was able to make a code that converts between three temp types, i would use a nested if statement if i were to improve it.
