#include <iostream>

using namespace std;
int main() {
	int NumberOfPositions; cin >> NumberOfPositions;
	int Steps{};
	while (NumberOfPositions) {
		if (NumberOfPositions >= 5) {
			Steps++;
			NumberOfPositions -= 5;
		}
		else if (NumberOfPositions < 5) {
			Steps++;
			NumberOfPositions = 0;
		}

	}
	cout << Steps;
}