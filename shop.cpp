#include<iostream>
using namespace std;

//global variables
string inventory[10];

//function declarations
void shop();


int main() {
	

	void shop();

	int room = 1;
	char input;

	cout << "You wake up tp find yourslef in a SPOOPY dungeon. Can you escape? Good luck!" << endl;

	do {
		switch (room) {
		case 1:
			cout << "You are in room 1. You can go North." << endl;
			cout << "press p for shop" << endl;
			cin >> input;
			if (input == 'N')
				room = 2;
			else if (input == 'p')
				shop();
			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "You are in room 2. You can go south , East or West." << endl;
			cin >> input;
			if (input == 'S')
				room = 2;
			else if (input == 'E')
				room = 4;
			else if (input == 'W')
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;

		}
	} while (input != 'q');
}




void shop() {
	
	string input;
	do {
		cout << "Hi ! Welcome to my shop!" << endl;
		cout << "press 'p' for potion, 'k' for key, 'l' for lamp." << endl;
		cout << "press 'q' to quit." << endl;
		cin >> input;
		if (input == "p") {
			inventory[0] = "potion";

		}
		else if (input == "k") {
			inventory[1] = "key";
		}
		else if (input == "l")
			inventory[2] = "lamp";

	} while (input != "q");

}
