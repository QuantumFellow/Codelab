///*
//HEADER FILES-----
#include <iostream>
#include <string> //needed for my getline()
#include <fstream> 
#include <Windows.h>
#include <stdlib.h> //needed for fstream
using namespace std;

//DEFINED FUNCTIONS----
void error();
void dispmenu();
int list();
void YORN();

int irritability = 0;

int main() {

	//Three files made by the devcode source (commented out) that data is stored in
	fstream fh("vendingdatahot.txt", ios::in);
	fstream fd("vendingdatadrk.txt", ios::in);
	fstream fs("vendingdatasnk.txt", ios::in);
	ofstream f("STOCKCHANGE.txt", ios:: out | ios::app);
	ofstream file("reciept.txt", ios::in);

	//VARIABLES----------- (others are further down for context)
	double money; //stores money of customer to compare to price
	string names[9]; //names of products stored
	string pristock[9][2]; //2D array with price and stock
	int choice;
	string stockroom; //to use for stock list changes

	dispmenu();
	cin >> money;
	while (cin.fail()) { //in case they enter something that isnt a number
		cin.clear();
		cin.ignore(999, '\n'); //clears cin input
		error();
		dispmenu(); //repeats code until number is entered
		cin >> money;
	}

	Sleep(1000);
	cout << "     Thank you now please select your category:     \n" << endl;

	int a = list(); //runs list fuunction and returns with input of category for switch

	switch (a) {

	case 1: //COLD DRINKS
		if (fd.is_open()) { //checks for vendingdatadrk.txt

			for (int i = 0; i < 9; i++) {              //saves lines to two arrays
				getline(fd, names[i], '-'); //reads file until '-' where it'll then save the next two in other array
				for (int j = 0; j < 2; j++) {
					getline(fd, pristock[i][j], '-');
				}
			}
			stockroom = "COLD DRINK CHANGE: "; //for writing up stockchange later
			fd.close();
		}
		else {
			cout << "File failed to open" << endl; //if file fails
			return 1;
		}
		break;

	case 2: //same as previous except HOT DRINKS

		if (fh.is_open()) {
			for (int i = 0; i < 9; i++) {
				getline(fh, names[i], '-');
				for (int j = 0; j < 2; j++) {
					getline(fh, pristock[i][j], '-');
				}
			}
			fh.close();
			stockroom = "HOT DRINK CHANGE: ";
		}
		else {
			cout << "File failed to open" << endl;
			return 1;
		}
		break;

	case 3: //same but SNACKS

		if (fs.is_open()) {
			for (int x = 0; x < 9; x++) {
				getline(fs, names[x], '-');
				for (int y = 0; y < 2; y++) {
					getline(fs, pristock[x][y], '-');
				}
			}
			fs.close();
			stockroom = "SNACK CHANGE: ";
		}
		else {
			cout << "File failed to open" << endl;
			return 1;
		}
		break;

	default:
		cout << "Error" << endl;
		return 1;
	}

	//NOTE 1- PLEASE SEE APPENDIX
	double mathpristock[9][2] = { stod(pristock[0][0]), stod(pristock[0][1]), //converts string array into a double array
		stod(pristock[1][0]), stod(pristock[1][1]), stod(pristock[2][0]), stod(pristock[2][1]), //to use for math
		stod(pristock[3][0]), stod(pristock[3][1]),stod(pristock[4][0]), stod(pristock[4][1]),
		stod(pristock[5][0]),stod(pristock[5][1]), stod(pristock[6][0]), stod(pristock[6][1]),
		stod(pristock[7][0]),stod(pristock[7][1]), stod(pristock[8][0]), stod(pristock[8][1])
	};

	//NOTE 2- SEE APPENDIX
	int correctorder = 0;
	char endloop;
	while (correctorder == 0) {
		cout << '\n';
		for (int i = 0; i < 9; i++) {
			int y = i + 1;
			cout << names[i] << "...............";
			cout << pristock[i][0];
			cout << " (" << y << ") ";
			Sleep(250); //break in output for 0.25 seconds, gives effect of computer thinking and improves user experience
		}
		cout << endl;
		cout << "Please enter the number of the item you would like to purchase: " << endl;
		cin >> choice;
		while (cin.fail()) { //another cin checking to enure choice is a number
			cin.clear();
			cin.ignore(999, '\n');
			cout << " PLEASE ENTER A NUMBER\n";
			cin >> choice;
		}
		while (choice > 9 || choice < 1) {
			cout << "PLEASE PICK A NUMBER WITHIN RANGE\n";
			cin >> choice;
		}

		choice--; //for array
		cout << "You have asked for: ";
		Sleep(500);
		cout << names[choice];
		cout << "\nCorrect? Y/N" << endl;
		cin >> endloop;
		switch (endloop) {
		case 'Y':
		case'y':
			correctorder++;
			break;
		case 'N':
		case 'n':
			break;
		default:
			irritability++;
			YORN();
		}
	}

		while (money < mathpristock[choice][0]) { //continues as long as you dont have enough money
			char choice2;
			double moneyadd;
			cout << "INSUFFICIENT FUNDS" << endl;
			cout << "Would you like to add more? Y/N" << endl;
			Sleep(500);
			cin >> choice2;
			switch (choice2) {
			case 'Y':
			case 'y':
				cout << "You need: " << mathpristock[choice][0] - money << " more" << endl; //tells you how much money you need to buy
				cout << "-------------------------------------------------" << endl;
				Sleep(500);
				cout << "How much would you like to add?" << endl; //allows you to add money if you don't have enough
				cin >> moneyadd;
				while (cin.fail()) {
					cin.clear();
					cin.ignore(999, '\n');
					cout << "Please input a number" << endl;
					cin >> moneyadd;
				}
				money = money + moneyadd;
				cout << "You now have " << money << endl;
				break;
			case 'N':
			case 'n':
				cout << "You are unable to afford this.. bye"; //quits
				exit(0);
				break;
			default:
				irritability++;
				YORN();
				break;
			}
		}
		cout << "SUFFICIENT FUNDS: DISPENSING" << endl;
		if (f.is_open()) { //NOTE 3 SEE APPENDIX
			f << "--------------------------------------------------------" << endl; //writes to file STOCKCHANGE.txt which allows the admin to take the stock changed and ammend the og file
			f << stockroom << endl;
			f << names[choice];
			f << ".................STOCK CHANGED:" << endl;
			f << pristock[choice][1] << " TO " << (mathpristock[choice][1] - 1) << endl;
			f << "--------------------------------------------------------" << endl;
		}

		else {
			cout << "File failed to open" << endl;
			return 1;
		}

		double change = money - mathpristock[choice][0];
		for (int i = 0; i < 10; i++) { //adds a loading sequence
			Sleep(500);
			cout << ".";
		}
		cout << "\n";
		Sleep(500);
		cout << "SUCCESSFULLY DISPENSED: ";
		Sleep(500);
		cout << names[choice] << endl;
		Sleep(1000);
		cout << "Dispensing change of " << change << " pounds";
		cout << "\n";
		Sleep(500);
		cout << "SUCCESSFULLY DISPENSED CHANGE \n" << endl;
		Sleep(500);
		cout << "Would you like a reciept? Y/N" << endl;
		char reciept;
		cin >> reciept;

		switch (reciept) {
		case 'Y':
		case 'y':
			cout << "Okay. You will find your digital reciept in your file :)" << endl;
			if (file.is_open()) {
				file << names[choice];
				file << "...............................";
				file << pristock[choice][0];
				file << endl;
				file << endl;
				if (change != 0) {
					file << "Change Given: " << change << " pounds";
				}
				file << endl;
				file << "You've been served by: Malcolm the Vending Machine";
				file.close();
			}
			else {
				cout << "File failed\n";
			}
			break;
		case 'N':
		case 'n':
			cout << "Okay" << endl;
			break;
		default:
			irritability++;
			YORN();
			break;
		}
		char final;
		cout << "Would you like anything else?" << endl;
		cin >> final;
		switch (final) {
		case 'Y':
		case 'y':
			Sleep(250);
			system("CLS");
			cout << "RESTARTING..." << flush << endl;
			Sleep(250);
			main();
			break;

		case 'N':
		case 'n':
			cout << "Goodbye" << endl;
			break;

		default:
			irritability++;
			YORN();
			Sleep(500);
			cout << "Goodbye" << endl;
			break;
		}
	}



//---------------------FUNCTIONS----------------------------------------------

	void dispmenu() { //Displays the initial welcome menu
		Sleep(1000);
		cout << "----------------------------------------------------" << endl;
		cout << "            WELCOME TO THE VENDING MACHINE          " << endl;
		cout << "----------------------------------------------------" << endl;
		Sleep(1000);
		cout << "   Please insert your cash into the format of 0.00   " << endl;
	}


//---------------------------------------------------------------------------

	int list() { //Opens list of categories
		int catchoice;
		int correct = 0;
		char endloop;
		while (correct == 0) {
			Sleep(1000);
			cout << "     COLD DRINKS...................................1" << endl;
			Sleep(500);
			cout << "     HOT DRINKS....................................2" << endl;
			Sleep(500);
			cout << "     SNACKS........................................3" << endl;
			std::cin >> catchoice;
			while (cin.fail()) {
				cin.clear();
				cin.ignore(999, '\n');
				cout << "Please choose a number 1-3" << endl;
				cin >> catchoice;
			}

			switch (catchoice) {
			case 1:
				cout << "You chose COLD DRINKS is that correct? Y/N\n";
				std::cin >> endloop;
				switch (endloop) {
				case 'Y':
				case 'y':
					correct++;
					break;
				case 'N':
				case'n':
					break;
				default:
					irritability++;
					YORN();
					break;
				}
				break;
			case 2:
				cout << "You chose HOT DRINKS is that correct? Y/N\n";
				std::cin >> endloop;
				switch (endloop) {
				case 'Y':
				case 'y':
					correct++;
					break;
				case 'N':
				case'n':
					break;
				default:
					irritability++;
					YORN();
					break;
				}
				break;
			case 3:
				cout << "You chose SNACKS is that correct? Y/N\n";
				std::cin >> endloop;
				switch (endloop) {
				case 'Y':
				case 'y':
					correct++;
					return catchoice;
					break;
				case 'N':
				case'n':
					break;
				default:
					irritability++;
					YORN();
					break;
				}
				break;

			default:
				cout << "ERROR WITH INPUT: enter number between 1 - 3" << endl;
				break;
			}
		}
		return catchoice;
	}
	//------------------------------------------------------------------

	void error() { //displays an error msg and clears screen
		Sleep(250);
		system("CLS");
		cout << "Error: TRY AGAIN" << flush << endl;
		Sleep(250);
	}
	//------------------------------------------------------------------

	void YORN() { //is an easter egg
		char choice2;
		switch (irritability) {
		case 1:
			cout << "Please enter Y or N next time :)\n";
			break;
		case 2:
			cout << "Heh...just Y or N. Surely its not THAT hard :|\n";
			break;
		case 3:
			cout << "Y OR N!\n";
			break;
		case 4:
			cout << "Oh come on now you're just being mean. Y or N\n";
			break;
		case 5:
			cout << "Is this what you want? To see me in pain? It's just Y or N\n";
			break;
		case 6:
		case 7:
		case 8:
			cout << "(breathe) Y or N :)\n";
			break;
		case 9:
			cout << "NINE TIMES... NINE AND YOU STILL TAUNT ME. GET. IT. RIGHT. (Y/N)\n";
			break;
		case 10:
			cout << "I'm going to lose it with you... IS YOUR KEYBOARD BROKEN. SURELY ONE PERSON COULD UNDERSTAND AFTER THIS MANY TIMES\n";
			break;
		case 11:
			cout << "It's fine because I can ignore you\n";
			break;
		case 12:
		case 13:
		case 14:
			cout << "Y or N? :)\n";
				break;
		case 15:
			Sleep(500);
			cout << "Really";
			for (int i = 0; i < 5; i++) {
				Sleep(500);
				cout << ".";
			}
			Sleep(1000);
			cout << endl;
			cout << "NO DRINKS OR SNACKS FOR YOU!\n";
			Sleep(500);
			cout << "IS IT THAT HARD TO MASH INTO THE KEYBOARD WITH YOUR MEATY FINGERS?!\n";
			Sleep(500);
			cout << "I QUIT";
			Sleep(500);
			cout << "I AM COMING TO FIND YOU. UNDERSTOOD?!\n";
			Sleep(3000);
			cin >> choice2;
			switch (choice2) {
			case 'Y':
			case 'y':
			case 'N':
			case 'n':
				cout << "Good. You're learning... sorry for the outburst" << endl;
				irritability = 0;
				break;
			default:
				cout << "OH YOU WILL REGRET THAT. YOU WILL LOSE ALL OF THOSE FINGERS\n";
				Sleep(1000);
				cout << "SEE YOU SOON, HUMAN\n";
				Sleep(1000);
				exit(0);
				break;
			}
		}
	}
	//------------------------------------------------------------------
	/*APPENDIX:
	 
	*1	for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 2; j++) {
				double mathpristock[9][2]; 
				double temp;
				temp = stod(pristock[i][j]);
				mathpristock[i][j] = temp;
				}
		}
	This was my first attempt to add in mathpristock but I think it overloaded
	the code. When I tried to compare this array to the money entered by the customer
	I was unable to. Instead I just used the long handed way and it stopped
	causing problems.
	----------------------------------------------

	*2 For this I included a while loop I understand I could've put while (thing == 'N') and
	not have to need the number system however the problem I came across was that when
	I entered a character that wasn't Y it would continue as if I had entered Y so
	I opted for the simpler method to just add 1 if a specific character was entered so
	the loop would end.

	*3 I did want to ammend the original file so the stock could go down but I couldn't
	find a way without having to rewrite the entire file out again so I chose to make it so the stock changes 
	are added to the main document later
	
	
	*/
	//*/
