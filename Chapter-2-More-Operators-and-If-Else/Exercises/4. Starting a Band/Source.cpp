#include <iostream>
#include <string>
using namespace std;

int main () {
	bool musicalFriend = true;
	string friendPlays = "guitar";
	if (musicalFriend) {
		if (friendPlays == "guitar" || friendPlays == "drums") {
			cout << "You can play in the band." << endl;
		}
		else {
			cout << "You cannot play in the band.";
		}
	}
	else {
		cout << "You cannot play in the band. ";
	}
}