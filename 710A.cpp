#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long n, m, t, x;
	cin >> t;
	while (t) {

		cin >> n >> m >> x;
		long long r = ((x-1) % n) + 1;
		long long c = ceil((double)x / n);
		long long result = (r - 1) * m + c;
		cout <<  result << endl;
		
		t--;
	}

	



}