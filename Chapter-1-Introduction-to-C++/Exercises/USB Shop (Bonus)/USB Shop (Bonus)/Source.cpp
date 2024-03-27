#include <iostream>
using namespace std;

int main() {
	float money;
	float left;
	const int USBPRICE = 6.00;
	int USB;
	cout << "How much money do you have, *mutters under breath* freak?" << endl;
	cin >> money;
	USB = money / USBPRICE;
	left = money - (USB * USBPRICE);
	cout << "You can buy " << USB << " USBs and you will have " << left << " pounds and pence left.";

}
