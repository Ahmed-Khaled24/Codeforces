#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int NotBend{ 1 }, Bend{ 2 };
	int StreetWidth{}, NumberOfFriends, Height; cin >> NumberOfFriends >> Height;

	vector<int> Heights;
	for (int i{}; i < NumberOfFriends; i++) {
		int input; cin >> input;
		Heights.push_back(input);
	}

	for (auto a : Heights) {
		if (a > Height)
			StreetWidth += Bend;
		else if (a <= Height)
			StreetWidth += NotBend;
	}

	cout << StreetWidth;


}