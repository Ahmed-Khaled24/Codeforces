#include <iostream>
#include <set>
using namespace std;
void fillSet(set<int> &set, int iterations) {
	
	for (int i{}; i < iterations; i++) {
		int temp; cin >> temp;
		set.insert(temp);
	}
}

int main() {
	int n;
	cin >> n;
	set<int> Levels_passed;

	int littleX; cin >> littleX;
	fillSet(Levels_passed, littleX);
	int littleY; cin >> littleY;
	fillSet(Levels_passed, littleY);

	if (Levels_passed.size() == n)
		cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}