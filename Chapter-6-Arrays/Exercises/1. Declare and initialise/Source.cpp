#include <iostream>
using namespace std;

int main() {
	//1.
	char array1[26]; //declare data type, name of array and how many elements
	int array2[10]; //for example, this is an integer array called "array2" that has 10 elements
	string array3[4];
	float array4[18]; //can also use double array4[18]

	//2.
	//LONG HAND
	int couarray[8]; //short for count array
	couarray[0] = 1; //following format of name array, say the number or variable and declare value 
	couarray[1] = 2;
	couarray[2] = 3;
	couarray[3] = 4;
	couarray[4] = 5;
	couarray[5] = 6;
	couarray[6] = 7;
	couarray[7] = 8;

	string strarray[2]; //short for string array
	strarray[0] = "Hello"; //double quotes for string
	strarray[1] = "Bye";

	char charray[3]; //short for character array
	charray[0] = 'A'; //single quotes for char
	charray[1] = 'B';
	charray[2] = 'C';

	float flarray[5]; //float array
	flarray[0] = 1.0;
	flarray[1] = 2.0;
	flarray[2] = 3.0;
	flarray[3] = 4.0;
	flarray[4] = 5.0;

	int intarray[6]; //integer array
	intarray[0] = 10;
	intarray[1] = 20;
	intarray[2] = 30;
	intarray[3] = 40;
	intarray[4] = 50;
	intarray[5] = 60;

	//3.
	//SHORTHAND
	string arraya[] = { "", "a", "aa", "aaa" }; //declare data type, array name and set values
	int arrayb[] = { 1, 10, 100, 1000, 10000 };
	bool arrayc[] = { true, false, false, true }; //boolean
	float arrayd[] = { 5.6, 1.8, 4.34, 7.65 }; //could also use a double
}