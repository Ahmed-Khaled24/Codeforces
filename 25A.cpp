#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main() {
	int N{}, input{};
	cin >> N;
	vector<int> Numbers; // numbers to analyse.

	// Read the numbers to analyse.
	for (int i{}; i < N; i++) {
		cin >> input; 
		Numbers.push_back(input);
	}

	vector <int> Even;
	vector <int> Odd;

	for (int i{}; i < N; i++) {
		if (Numbers.at(i) % 2 == 0)
			Even.push_back(i);
		else if (Numbers.at(i) % 2 == 1)
			Odd.push_back(i);
	}

	if (Even.size() < Odd.size()) {
		cout << Even.at(0)+1;
	}
	else cout << Odd.at(0)+1;







}