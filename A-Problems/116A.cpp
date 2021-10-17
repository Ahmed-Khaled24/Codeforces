#include <iostream>
#include <vector>
using namespace std;
int main() {

	// Read the data
	int NumberOfStops; cin >> NumberOfStops;
	vector<vector<int>> TramData;
	while (NumberOfStops) {
		int exit; cin >> exit;
		int enter; cin >> enter;
		TramData.push_back({ exit,enter });
		NumberOfStops--;
	}

	// Process the data
	vector<int> inside;
	int temp{};
	for (auto a : TramData) {
		temp -= a.at(0);
		temp += a.at(1);
		inside.push_back(temp);
	}

	// Get the max Value
	int max{inside.at(0)};
	for (auto a : inside) {
		if (max < a)
			max = a;
	}

	cout << max;
}