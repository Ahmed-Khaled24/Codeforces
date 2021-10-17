#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long  n, m, a{ 0 };
	unsigned long long numberOfFlagstones{ 0 };
	cin >> n >> m >> a;
	cout << endl;
	if (a < n && a < m) {

		unsigned long long row{ 0 };
		unsigned long long column{ 0 };

		row = ceil(static_cast<double> (n) / a);
		column = ceil(static_cast<double> (m) / a);
		numberOfFlagstones = row * column;
	}

	else if (a >= n || a >= m) {

		unsigned long long row{ 0 };
		unsigned long long column{ 0 };

		row = ceil(static_cast<double> (n) / a);
		column = ceil(static_cast<double> (m) / a);

		if (row <= 1 && column > 1) {
			numberOfFlagstones = column;
		}

		else if (column <= 1 && row > 1) {
			numberOfFlagstones = row;
		}

		else if (column == 1 && row == 1) {
			numberOfFlagstones = 1;
		}
	}

	cout << numberOfFlagstones << endl;

}
