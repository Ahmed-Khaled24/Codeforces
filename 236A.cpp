#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	string input; set<char> processed;
	cin >> input;
	for (char a : input) {
		processed.insert(a);
	}
	int result = processed.size();
	if (result % 2 == 1)
		cout << "IGNORE HIM!";
	else if (result % 2 == 0)
		cout << "CHAT WITH HER!";
}