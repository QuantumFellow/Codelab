
#include <iostream>
#include <string>
using namespace std;

int main() {
	int men;
	int wives;
	int sack;
	int cat;
	int kit;
	int wivesf;
	int sackf;
	int catf;
	int kitf;
	int items;

	cout << "How many Men did you meet?" << endl;
	cin >> men;
	cout << "How many Wives did you meet?" <<endl;
	cin >> wives;
	cout << "How many Sacks did each Wife have?" << endl;
	cin >> sack;
	cout << "How many Cats were in each Sack?" << endl;
	cin >> cat;
	cout << "How many Kits did each Cat have?" << endl;
	cin >> kit;

	wivesf = men * wives;
	sackf = men * wives * sack;
	catf = men * wives * sack * cat;
	kitf = men * wives * sack * cat * kit;
	items = sackf + kitf;

	cout << "In total there was/were:" << endl;
	cout << men << " Man/Men" << endl;
	cout << wivesf << " Wife/Wives" << endl;
	cout << sackf << " Sack/Sacks" << endl;
	cout << catf << " Cat/Cats" << endl;
	cout << kitf << " Kit/Kits" << endl;
	cout << "All together that comes to " << items << " Item/Items.";
	





}