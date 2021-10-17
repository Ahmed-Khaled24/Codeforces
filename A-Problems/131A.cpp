#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string input; 
	cin >> input;

	//count capital chars.
	int counter1{};

	for (auto a : input) {
		if (isupper(a))
			counter1++;
	}

	// if all chars are capital.
	if (counter1 == input.size()) {
		for (auto& a : input) {
			a = tolower(a);
		}
		cout << input;
	}

	// if only the first char is capital.
	else if (counter1 == 1 && isupper(input.at(0)))
		cout << input;

	// if the Caps is open accidently.
	else if (counter1 == input.size() - 1 && islower(input.at(0))) {
		for (auto& a : input) {
			if (isupper(a))
				a = tolower(a);
			else if (islower(a))
				a = toupper(a);
		}

		cout << input;
	}

	else cout << input;
}