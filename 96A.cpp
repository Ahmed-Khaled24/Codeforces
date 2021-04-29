#include <iostream>
#include <string>
using namespace std;
int main() {
	string input; cin >> input;
	string _0 = "0000000" , _1 = "1111111";
	if (input.find(_0) != string::npos || input.find(_1) != string::npos)
		cout << "YES";
	else if (input.find(_0) == string::npos && input.find(_1) == string::npos)
		cout << "NO";
}