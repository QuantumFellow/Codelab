#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char inp;
	cout << "Pick a letter from the alphabet in lower case" << endl;
	cin >> inp;

	if (isalpha(inp)) {
		if (inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u') {
			cout << "This is a vowel" << endl;
		}
		else {
			cout << "This is a consonant" << endl;
		}
	}
	else if (isdigit(inp)) {
		cout << "This value is a Number" << endl;
	}
}

