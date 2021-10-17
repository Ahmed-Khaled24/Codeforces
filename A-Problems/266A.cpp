#include <iostream>
#include < vector>
using namespace std;
int main() {
	int number; cin >> number;
	vector<char> bricks;
	//Fill the vector of chars
	while (number) {
		char temp; cin >> temp;
		bricks.push_back(temp);
		number--;
	}

	int i{ 1 };
	int counter{};
	while (i < bricks.size()) {
		int i_ = i - 1;
		if (bricks.at(i) == bricks.at(i_)) {
			counter++;
		}
		i++;
	}
	
	cout << counter;
}