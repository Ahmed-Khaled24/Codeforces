#include <iostream>
#include <vector>
using namespace std;
int main() {
	int Number; cin >> Number;
	int loops; cin >> loops;
	while (loops) {
		if ((Number % 10) != 0) {
			Number--;
		}
		else if ((Number % 10) == 0) {
			Number = Number / 10;
		}
		loops--;
	}
	cout << Number;
}

