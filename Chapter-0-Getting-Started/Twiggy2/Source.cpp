#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 6; i++) {
		for (int j = i; j % 2 == 0; j++) {
			cout << "----- \n";
		}
		for (int y = i; y % 2 != 0; y++) {
			cout << "***** \n";
		}
	}

}  

