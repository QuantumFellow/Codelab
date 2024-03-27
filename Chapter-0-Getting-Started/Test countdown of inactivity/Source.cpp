#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

double moneym;

void dispmenu() {
	Sleep(1000);
	cout << "----------------------------------------------------" << endl;
	cout << "            WELCOME TO THE VENDING MACHINE          " << endl;
	cout << "----------------------------------------------------" << endl;
	Sleep(1000);
	cout << "   Please insert your cash int the format of 0.00   " << endl;
}

void list() {
	int catchoice;
	char loop = 'N';
	while (loop == 'N' || loop == 'n') {
		Sleep(1000);
		cout << "     Thank you now please select your category:     \n" << endl;
		Sleep(1000);
		cout << "     COLD DRINKS...................................1" << endl;
		cout << "     HOT DRINKS....................................2" << endl;
		cout << "     SNACKS........................................3" << endl;
		std::cin >> catchoice;
		switch (catchoice) {
		case 1:
			cout << "You chose COLD DRINKS is that correct? Y/N";
			std::cin >> loop;
			break;
		case 2:
			cout << "You chose HOT DRINKS is that correct? Y/N";
			std::cin >> loop;
			break;
		case 3:
			cout << "You chose SNACKS is that correct? Y/N";
			std::cin >> loop;
			break;
		default:
			cout << "Error with input" << endl;
		}
	}

}

int main() {
	double money;
	dispmenu();
	cin >> money;
	while (cin.fail()) {
		cout << "Invalid input, please try again" << endl;
		cin.clear();
		cin.ignore(999, '\n');
		dispmenu();
		cin >> money;
	}
	list();

}