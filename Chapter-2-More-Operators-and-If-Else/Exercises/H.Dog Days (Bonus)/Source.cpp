#include <iostream> 
using namespace std;

int main() {
	float age;
	float dage;
	cout << "How old is your dog in human years?" << endl;
	cin >> age;
	if (age >= 2) {
		dage = 21 + ((age - 2) * 4);
		cout << "Your dog is " << dage << " years old." << endl;
	}
	else if (age == 1) {
		dage = 10.5;
		cout << "Your dog is " << dage << " years old." << endl;
	}
	else if (age < 1) {
		dage = age * 10.5;
		cout << "Your dog is " << dage << " years old." << endl;
	}
	else if (age <= 0) {
		cout << "You have entered an invalid input." << endl;
	}
	else
		cout << "Invalid input" << endl;
}