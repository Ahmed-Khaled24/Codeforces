#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long n{ 0 }, output{ 0 }; cin >> n;
	if (n % 2 == 0)
		output = n / 2;
	else
		output = (-1 * (n + 1)) / 2;

	cout << output;
}