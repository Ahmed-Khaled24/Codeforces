#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> &v) {
	int max = v.at(0);
	for (auto element : v) {
		if (element > max)
			max = element;
	}
	return max;
}

int main() {
	int n; cin >> n;
	vector<int> sequance;

	for (int i = 0; i < n ; i++) {
		int temp; cin >> temp;
		sequance.push_back(temp);
	}

	vector<int> Lengths;
	int CurrLength = 1;
	for (int i = 1; i < n; i++) {
		if (sequance.at(i) >= sequance.at(i - 1))
			CurrLength++;
		else {
			Lengths.push_back(CurrLength);
			CurrLength = 1;
		}
	}

	Lengths.push_back(CurrLength);
	cout << max(Lengths);
}