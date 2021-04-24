#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	vector<vector<int>> Matrix;
	int A = 5;
	int Rowpos{}, ColPos{}, counter{1};
	while (A--) {

		int _1, _2, _3, _4, _5;
		cin >> _1 >> _2 >> _3 >> _4 >> _5;
		if (_1 == 1 || _2 == 1 || _3 == 1 || _4 == 1 || _5 == 1)
			Rowpos = counter;
		
		if (_1 == 1)
			ColPos = 1;
		else if (_2 == 1)
			ColPos = 2;
		else if (_3 == 1)
			ColPos = 3;
		else if (_4 == 1)
			ColPos = 4;
		else if (_5 == 1)
			ColPos = 5;

		vector <int> row{ _1 , _2 , _3 ,_4 , _5 };
		Matrix.push_back(row);
		counter++;
	}

	int Moves{};

	if (Rowpos != 3) {
		Moves += abs(3 - Rowpos);
	}
	if (ColPos != 3)
		Moves += abs(3 - ColPos);

	cout << Moves;
}