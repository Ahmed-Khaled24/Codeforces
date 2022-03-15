#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>

using namespace std;
int main() {
	int n{};	cin >> n;						// the number of problems in the contest.
	int PN{};									//problem number.
	vector<pair<int, int>> result;				// result vector.

	while (n) {
		int x, y, z; cin >> x >> y >> z;
		int sum = z + x + y;
		pair<int, int> temp{ PN,sum };
		result.push_back(temp);
		PN++;
		n--;
	}

	int final{};

	for (auto a : result) {
		if (a.second >= 2) {
			final++;
		}
	}

	cout << final;




}