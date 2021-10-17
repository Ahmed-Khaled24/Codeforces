#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	string input; cin >> input;
	int lower{}, upper{};

	// Count upper and lower characters
	for (auto a : input) {
		if (islower(a))
			lower++;
		else if (isupper(a))
			upper++;
	}


	// Modify
	if (upper > lower) {
		for (auto &a : input) {
			a = toupper(a);
		}
	}
	else if (upper <= lower) {
		for (auto& a : input) {
			a = tolower(a);
		}
	}

	cout << input;

}