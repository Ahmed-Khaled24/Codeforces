#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2, answer;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++) {
		if (str1.at(i) == str2.at(i))
			answer.push_back('0');
		else answer.push_back('1');
	}

	cout << answer;
}
