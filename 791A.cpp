#include <iostream>
#include <vector>
using namespace std;
int main() {
	const int limak = 3;
	const int bob = 2;
	int limakCur; cin >> limakCur;
	int bobCur; cin >> bobCur;
	int years{};
	while(bobCur >= limakCur){
		bobCur *= bob;
		limakCur *= limak;
		years++;
	}

	cout << years;
}