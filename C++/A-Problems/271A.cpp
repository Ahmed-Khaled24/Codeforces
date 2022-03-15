#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main() {
	int n; cin >> n;
	stringstream os;
	string input;
	set<char> result;
	
	do {
		n++;
		os << n;
		input = os.str();
		result.clear();

		for (auto a : input) {
			result.insert(a);
		}

		input = "";
		os.str("");
		
	} while (result.size() != 4);

	cout << n;

}