#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream f("hello.txt",ios::in);
	string n;
	if (f.is_open()) {
		f >> n;
		cout << n;
		f.close();
	}
	else {
		cout << "ERROR";
	}
}