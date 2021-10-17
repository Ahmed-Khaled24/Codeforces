#include <iostream>
#include <string>
using namespace std;
int main() {
	string word;	cin >> word;
	int it{0};	int size = word.size();
	string result;

	for (it; it < size; it++) {

		if (word.at(it) == 'h') {
			result.push_back(word.at(it));
			break;
		}

	}

	for (it; it < size; it++) {

		if (word.at(it) == 'e') {
			result.push_back(word.at(it));
			break;
		}

	}

	for (it; it < size; it++) {
		static int count{};
		if (word.at(it) == 'l') {
			result.push_back(word.at(it));
			count++;
			if (count == 2)
				break;
		}

	}

	for (it; it < size; it++) {

		if (word.at(it) == 'o') {
			result.push_back(word.at(it));
			break;
		}

	}


	if (result == "hello") {
		cout << "YES";
	}
	else cout << "NO";

}