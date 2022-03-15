#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	string input; cin >> input;
	input.at(0) = toupper(input.at(0));
	cout << input;

}