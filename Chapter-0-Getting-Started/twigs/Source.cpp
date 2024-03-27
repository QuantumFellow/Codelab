#include <iostream>
#include <Windows.h>
using namespace std;

int cred = 10;
int main() {
	char dec1;
	int num1, num2, num3;
	char inp;
	cout << "Want to keep your credits? You have " << cred << endl;
	cin >> dec1;
	switch (dec1) {
	case 'Y':
	case 'y':
		cout << "You've won " << cred << endl;
		return 0;
		break;
	case 'N':
	case 'n':
		cout << "Play? You have " << cred << " left. Y/N" << endl;
		cin >> inp;

		switch (inp) {
		case 'Y':
		case 'y':
			num1 = rand() % 6;
			num2 = rand() % 6;
			num3 = rand() % 6;
			cred--;
			if (cred <= -1) {
				cout << "Out of credits" << endl;
				return 0;
			}
			else {
				cout << "You have " << cred << " left" << endl;
				cout << num1 << num2 << num3 << endl;
				if (num1 == num2 && num1 == num3 && num2 == num3) {
					cred = cred + 2;
					cout << "\nYou were awarded 2 credit." << endl;
				}
				else if (num1 == num2 || num1 == num3 || num2 == num3) {
					cred++;
					cout << "\nYou were awarded a credit." << endl;
				}
			}
			main();
			break;
		case 'N':
		case 'n':
			char dec;
			cout << "Okay, Bye." << endl;
			Sleep(5000);
			cout << "Are you sure?" << endl;
			cin >> dec;
			switch (dec) {
			case 'y':
			case 'Y':
				break;
			case 'n':
			case 'N':
				main();
				break;
			}
			break;
		}
	}
	return 0;
}