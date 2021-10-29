#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> colors;

	for (int i{ 0 }; i < 4; i++) {
		int temp; 
		cin >> temp;
		colors.insert(temp);
	}

	if (colors.size() == 4)
		cout << 0;
	else 
		cout << 4 - colors.size();
}