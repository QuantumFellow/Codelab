#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#define MAX_PROD 9;
using namespace std;

class Cat {
public: 
	string product;
	double price;
	int stock;
	Cat(string pro, double pri, int sto) {
		product = pro;
		price = pri;
		stock = sto;
	}
};

void error() {
	system("CLS");
	cout << "Error: File Failed to open" << flush << endl;
}


vector <Cat> myprodsnacks;
vector <Cat> myproddrink;
vector <Cat> myprodhot;

int main() {
	ofstream fs("vendingdatasnk.txt");
	if (fs.is_open()) {
		myprodsnacks.push_back(Cat("Peanuts", 0.79, 5));
		myprodsnacks.push_back( Cat("Walkers", 1.00, 8) );
		myprodsnacks.push_back({ Cat("Quavers", 1.00, 4) });
		myprodsnacks.push_back({ Cat("Squares", 0.90, 5) });
		myprodsnacks.push_back({ Cat("Scampi Fries", 0.70, 7) });
		myprodsnacks.push_back({ Cat("Twirl", 1.65, 2) });
		myprodsnacks.push_back({ Cat("Bounty", 0.75, 10) });
		myprodsnacks.push_back({ Cat("McCoys", 1.00, 6) });
		myprodsnacks.push_back({ Cat("Wotsits", 0.95, 9) });
	
		for (int i = 0; i < MAX_PROD; i++) {
			fs << myprodsnacks[i].product << "-" << myprodsnacks[i].price << "-" << myprodsnacks[i].stock << "-";
			fs << endl;
		}
	}
	else {
		error();
	}

	ofstream fd("vendingdatadrk.txt");
	if (fd.is_open()) {
		myproddrink.push_back({ Cat("Oasis", 1.60, 2) });
		myproddrink.push_back({ Cat("Fanta", 1.19, 6) });
		myproddrink.push_back({ Cat("Pepsi", 0.70, 1) });
		myproddrink.push_back({ Cat("Dr Pepper", 1.65, 4) });
		myproddrink.push_back({ Cat("Irn Bru", 1.35, 3) });
		myproddrink.push_back({ Cat("Water", 0.90, 7) });
		myproddrink.push_back({ Cat("Sprite", 1.09, 5) });
		myproddrink.push_back({ Cat("Smoothie", 1.87, 4) });
		myproddrink.push_back({ Cat("Milkshake", 2.19, 9) });

		for (int i = 0; i < 9; i++) {
			fd << myproddrink[i].product << "-" << myproddrink[i].price << "-" << myproddrink[i].stock << "-";
			fd << endl;
		}
	}
	else {
		error();
	}

	ofstream fh("vendingdatahot.txt");
	if (fh.is_open()) {
		myprodhot.push_back({ Cat("Green Tea", 1.80, 2) });
		myprodhot.push_back({ Cat("Cappuccino", 2.65, 5) });
		myprodhot.push_back({ Cat("Latte", 2.65, 8) });
		myprodhot.push_back({ Cat("Flat White", 2.40, 1) });
		myprodhot.push_back({ Cat("Americano", 2.40, 7) });
		myprodhot.push_back({ Cat("Decaf Coffee", 2.30, 8) });
		myprodhot.push_back({ Cat("Decaf Tea", 1.75, 9) });
		myprodhot.push_back({ Cat("Tea", 1.75, 3) });
		myprodhot.push_back({ Cat("Hot Chocolate", 3.15, 6) });

		for (int i = 0; i < 9; i++) {
			fh << myprodhot[i].product << "-" << myprodhot[i].price << "-" << myprodhot[i].stock << "-";
			fh << endl;
		}
	}
	else {
		error();
	}

}






