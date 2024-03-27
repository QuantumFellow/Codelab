#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int Ascii = 97; //declaring a in ascii
	char alphabet[26];
	for (int i = 0; i < 26; i++) { //will generate 26 values
		alphabet[i] = Ascii; //stores array values
		Ascii++; //moves to next ascii letter
	}
	for (int j = 0; j < 26; j++) {
		cout << alphabet[j]; //prints that generated array
	}
	cout << endl;

	for (int y = 13; y < 26; y++) { //starts 13th letter of aphabet nd runs from there
		cout << alphabet[y];
	}
	cout << endl;

	int num[] = { 1, 3, 5, 7, 9 }; //array
	for (int d = 4; d > -1; d--) { //counts in reverse
		cout << num[d]; //prints
	}
	cout << endl;

	int f = 0;
	int g = 0;
	int num2[] = { 10, 15, 25, 35, 50, 75 }; //array
	for (int e = 0; e < 6; e++) { //will iterate 6 times
		f = num2[e]; //stores f value
		g = g + f; //adds f value to g(total)
	}
	cout << g / 6 << endl; //total divided by number of values in array

	// Please see appendix 1.0 for additional solution 
	int array[] = { 10, 88, 4, 21, 345, 99, 17 };
	for (int a = 0; a < 7; a++) {
		sort(array, array + 7);
	}

	for (int b = 0; b < 7; b++) {
		cout << array[b] << endl;
	}

	int number = 0; //acts as variable storage
	int num3[100]; //initialising array
	for (int c = 0; c < 100; c++) { //for loop runs 100 times
		num3[c] = number; //stores variable in array
		number++; //adds to count
	}

	for (int d = 0; d < 100; d++) { //runs 100 times
		if (num3[d] % 2 == 1) { //if divided by two and leaves remainder
			cout << num3[d] << endl; //prints the number
		}
	}


	return 0;
}

// APPENDIX 1.0
//for the sort funtion i realised it was much shorter than the other options
//the other option i wouldve gone for wouldve been the bubble sort method
// int temp;
// for (int a1 = 0; a1 < 6; a1++) {
// for (int a = 0; a < 6; a++) {
//if (array[a]>array[a]+1) {
//temp = array[a];
//array[a]=array[a+1];
//array[a+1]=temp;} } }