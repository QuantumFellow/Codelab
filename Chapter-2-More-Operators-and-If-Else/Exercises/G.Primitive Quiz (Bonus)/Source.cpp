#include <iostream>
#include <string>
using namespace std;


int main() {
	string ans;
	int score = 0;
	cout << "What is the capital of France?" << endl;
	cin >> ans;
	if (ans == "Paris" || ans == "paris") {
		cout << "Congrats your answer was correct!" << endl;
		score++;
		cout << "Your score is " << score << "/5" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}

	cout << "What is the capital of Poland?" << endl;
	cin >> ans;
	if (ans == "Warsaw" || ans == "warsaw") {
		cout << "Congrats your answer was correct!" << endl;
		score++;
		cout << "Your score is " << score << "/5" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}

	cout << "What is the capital of Russia?" << endl;
	cin >> ans;
	if (ans == "Moscow" || ans == "moscow") {
		cout << "Congrats your answer was correct!" << endl;
		score++;
		cout << "Your score is " << score << "/5" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}

	cout << "What is the capital of England?" << endl;
	cin >> ans;
	if (ans == "London" || ans == "london") {
		cout << "Congrats your answer was correct!" << endl;
		score++;
		cout << "Your score is " << score << "/5" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}

	cout << "What is the capital of Belgium?" << endl;
	cin >> ans;
	if (ans == "Brussels" || ans == "brussels") {
		cout << "Congrats your answer was correct!" << endl;
		score++;
		cout << "Your score is " << score << "/5" << endl;
	}
	else {
		cout << "Incorrect" << endl;
	}
	cout << "Your final score is " << score << "/5. Well done" << endl;
}