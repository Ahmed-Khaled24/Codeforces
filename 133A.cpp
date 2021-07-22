#include <iostream>
#include <string>
using namespace std;

int main() {
	string input; cin >> input;
	int check{};
	for (auto a : input) {
		if (a == 'H' || a == 'Q' || a == '9')
			check++;
	}

	if (check == 0) cout << "NO";
	else if (check != 0) cout << "YES";


}