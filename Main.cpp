#include<iostream>
using namespace std;

string inventory[10];




int main() {
	string input = "no";
	int room = 1;
	while (input != "quit") {

		cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
		for (int i = 0; i < 10; i++) {
			cout << inventory[i] << " | ";
		}
		cout << endl;

		switch (room){
		case 1:
			cout << "your in room 1, you can go east" << endl << "you found a pinapple" << endl << "there's a empty vase on the ground" << endl;;
			inventory[0] = "pineapple";

			cin >> input;
			if (input == "look in vase") {
				cout << "there's a key in the vase" << endl;
				cin >> input;
				if (input == "key") {
					inventory[2] = "key";
				}
			}
			if (input == "east" && inventory[2] = "key" || input == "go east" && inventory[2] = "key") {
				room = 2;
			}
			break;
		case 2:
			cout << "your in room 2, you can go north or west" << endl;
			if (inventory[1] != "sword")
				cout << "you found a sword" << endl;
			cin >> input;
			if (input == "sword") {
				inventory[1] = "sword";
			}
			if (input == "north" || input == "go north") {
				room = 3;
			}
			else if (input == "west" || input == "go west") {
				room = 1;
			}
			break;
		case 3:
			cout << "your in room 3" << endl;
			cout << "there's a dragon" << endl;
			if (inventory[1] == "sword") {
				cout << "the dragon is slayed.. it had kids you know, you monster!" << endl;
				input = "quit";
			}
			else if (inventory[1] != "sword") {
				cout << "your eaten by the dragon" << endl;
				input = "quit";
			}
			break;
		}
		cout << "thanks for playing" << endl;
	}

}
