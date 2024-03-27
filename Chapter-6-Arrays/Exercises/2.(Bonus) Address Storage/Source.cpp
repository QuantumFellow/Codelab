#include <iostream>
using namespace std;

int  main() {
	string array[3][2];
	//array[0][0] = "a";
	//array[0][1] = "b";
	//array[1][0] = "c"; //this was used just to test the print
	//array[1][1] = "d";
	//array[2][0] = "e";
	//array[2][1] = "f";
	string a;
	string b;
	int d = 0;
	for (int c = 0; c < 3; c++) {
		cout << "Enter your name and postcode" << endl;
		cin >> a >> b;
		array[c][0] = a; //2d array starting at 0,0
		for (int d = 1; d < 2; d++) { //d kept resetting value as was 0 fixed now
			array[c][d] = b; //0,1
		}
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++) { //prints all values using nested for loop
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
