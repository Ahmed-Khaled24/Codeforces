#include <iostream>
#include <set>
#include <cctype>
#include <string>
using namespace std;

int main() {
	set<char> MySet{};
	string inputString{};
	getline(cin, inputString);

	int StringSize = inputString.size();
	for (int i{}; i < StringSize; i++) {
		if (isalpha(inputString.at(i))) {
			MySet.insert(inputString.at(i));
		}
		else continue;
	}
	
	int SetSize = MySet.size();
	cout << SetSize;

}
