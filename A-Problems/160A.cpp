#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> Values;

	for (int i{}; i < n; i++) {
		int input; cin >> input;
		Values.push_back(input);
	}

	sort(Values.begin(), Values.end());
	reverse(Values.begin(), Values.end());

	int Sum{};
	for (auto a : Values) {
		Sum += a;
	}

	int halfSum{ Sum / 2 };
	int ValuesOfCoins{}, NumberOfCoins{};

	for (auto a : Values) {
		ValuesOfCoins += a;
		NumberOfCoins++;

		if (ValuesOfCoins > halfSum) break;
		else continue;
	}

	cout << NumberOfCoins;

}