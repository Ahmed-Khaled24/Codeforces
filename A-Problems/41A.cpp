#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input, inputR;
	cin >> input >> inputR;
	reverse(inputR.begin(), inputR.end());

	if (input == inputR) {
		cout << "YES";
	}
	else cout << "NO";
}