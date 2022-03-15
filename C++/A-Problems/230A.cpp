#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	int player_strength, number_of_dragons;
	cin >> player_strength >> number_of_dragons;
	multimap<int, int> dragons;		/*sorted from smaller to larger key[dragon strength], allow duplicates*/

	for (int i{ 0 }; i < number_of_dragons; i++) {
		int dragon_strength, bonus_strength;
		cin >> dragon_strength >> bonus_strength;
		dragons.insert({ dragon_strength, bonus_strength });
	}


	string output = "";
	for (auto const& [dragon_strength, bonus_strength] : dragons)	/*need c++ 17 or higher to run*/ {

		if (player_strength > dragon_strength)
			player_strength += bonus_strength;

		else if (player_strength <= dragon_strength) {
			output = "NO";
			break;
		}
	}

	if (output != "NO")
		output = "YES";

	cout << output;

}