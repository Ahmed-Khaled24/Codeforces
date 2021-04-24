#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
#include <cctype>
using namespace std;
void Tolower(string& str) {
	for (auto& a : str) {
		if (isupper(a))
			a = tolower(a);
	}
}

int main() {
	string _1 , _2;
	getline(cin, _1);
	getline(cin, _2);
	
	Tolower(_1);
	Tolower(_2);

	if (_1 < _2)
		cout << -1;
	if (_2 < _1)
		cout << 1;
	if (_1 == _2)
		cout << 0;

}