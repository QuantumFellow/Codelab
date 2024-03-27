#include <iostream>
#include <string>
using namespace std;

int main() {
	string Name; //Switched to auto so the name entered doesn't have to be one string
	string Hometown;
	string agein;
	
	cout << "Please Enter your name" << endl;
	getline(cin, Name);
	cout << "Please enter your hometown" << endl;
	cin >> Hometown;
	cout << "Please enter your age" << endl;
	cin >> agein;
	int age = stoi(agein);


	cout << "Your name is " << Name << "." << endl;
	cout << "Your Hometown is " << Hometown << "." << endl;
	cout << "Your Age is " << age << "." << endl;
}