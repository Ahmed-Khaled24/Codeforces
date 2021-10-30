#include <iostream>
#include <string>
using namespace std;
int main() {
	int horizontal, vertical;
	cin >> horizontal >> vertical;
	string current_player = "Akshat";


	while (true) {		
		horizontal--;
		vertical--;

		if (horizontal != 0 && vertical != 0)

			// change the player.
			if (current_player == "Akshat")
				current_player = "Malvika";
			else current_player = "Akshat";

		else
			break;

	}

	cout << current_player;
}