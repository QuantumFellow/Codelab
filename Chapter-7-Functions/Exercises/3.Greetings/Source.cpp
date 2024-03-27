#include <iostream>
using namespace std;

string greetings(string name, string greet) {
	return name + greet; //adds strings together
}

int main() {
	string inp1; //declaring
	string inp2;
	cout << "Name: \n";
	cin >> inp1; //collects 1
	cout << "Greeting input: \n";
	cin >> inp2; //collects 2
	cout << greetings(inp1, inp2) << endl; //prints
	return 0;
}