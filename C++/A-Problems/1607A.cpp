#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int test_cases;
	cin >> test_cases;
	vector<string> keyboards, words;


	for (int i{}; i < test_cases; i++) {
		string temp_keyboard, temp_word;
		cin >> temp_keyboard >> temp_word;
		keyboards.push_back(temp_keyboard);
		words.push_back(temp_word);
	}


	for (int i = 0; i < test_cases; i++) {

		string current_word = words.at(i),
			   current_keyboard = keyboards.at(i);

		int pos1 = current_keyboard.find(current_word.at(0)),
			pos2 = pos1,
			distance = 0,
			time = 0;



		for (int j =  1 ; j < current_word.size(); j++) {

			pos2 = current_keyboard.find(current_word.at(j));
			distance = abs((pos1 - pos2));
			time += distance;
			pos1 = pos2;

		}


		std::cout << time << endl;

	}
}