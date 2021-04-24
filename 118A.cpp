#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string shrink(string a) {
	string result{};
	for (auto c : a) {
		c = tolower(c);
		if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
			result.push_back(c);
		}
	}
	return result;
}
int main() {
	string input;
	getline(cin, input);

	if (!input.empty()) {
		string result = shrink(input);

		for (auto a : result) {
			cout << "." << a;
		}
	}
	





}