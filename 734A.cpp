#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	string input; cin >> input;
	int Anton{}, Danik{};
	for (auto a : input) {
		if (a == 'A') Anton++;
		else if (a == 'D') Danik++;
	}

	if (Anton > Danik)
		cout << "Anton";
	else if (Danik > Anton)
		cout << "Danik";
	else if (Anton == Danik)
		cout << "Friendship";
}