#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	float fraction = 1.0/ n;
	vector<int> percentages;

	for (int i{ 0 }; i < n; i++) {
		int temp; cin >> temp;
		percentages.push_back(temp);
	}

	float output = 0;
	for (auto p : percentages) {
		output += (float(p)  * fraction);
	}

	cout << output;

}