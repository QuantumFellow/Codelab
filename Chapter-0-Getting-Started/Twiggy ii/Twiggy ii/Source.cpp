#include <iostream> 
using namespace std;

namespace
{
	int var = 5;
}

int main() {
	int var2=0;
	cout << var << endl;
	cout << "" << endl;
	cout << "Hello" << endl;
	cout << "Please input a number higher than 15" << endl;
	cin >> var2;

	if (var2 > 15){
		cout << "well done" << endl;
	}
	else {
		cout << "No, you're a whiny baby" << endl;
	}



	return 0;
}