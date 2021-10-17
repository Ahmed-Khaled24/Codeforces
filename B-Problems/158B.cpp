#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int main() {
	int groups; cin >> groups;
	map <int, int> members;

	for (int i{}; i < groups; i++) {
		int Num; cin >> Num;
		members[Num]++;

	}

	int taxis{};

	//Drive all 4 members groups.

	{
		auto it4 = members.find(4);
		if (it4 != members.end()) {
			taxis += it4->second;
			it4 = members.end();
		}

	}

	//------------------------------------------------------------------------------

	auto it2 = members.find(2);
	if (it2 != members.end()) {

		//If the 2 members groups are even each 2 groups Drive together.
		if (it2->second % 2 == 0) {
			int Tax = it2->second / 2;
			taxis += Tax;
			it2 = members.end();
		}

		//If the 2 members groups are odd each 2 groups Drive together and remain one group.
		else if (it2->second % 2 == 1) {
			int Tax = (it2->second - 1) / 2;
			taxis += Tax;
			it2->second = 1;
		}
	}
	//------------------------------------------------------------------------------

	auto it1 = members.find(1);
	auto it3 = members.find(3);

	// We have groups of 1 and groups of 3

	if (it1 != members.end() && it3 != members.end()) {

		while (it1->second > 0 && it3->second > 0) {
			it1->second--;	it3->second--;
			taxis++;
		}

		if (it1->second == 0)
			it1 = members.end();

		if (it3->second == 0)
			it3 = members.end();
	}

	// We have groups of 1 and don't have groups of 3

	if (it1 != members.end() && it3 == members.end()) {
		
		if (it2 != members.end()) {

			if (it2->second == 1 && (it1->second == 1 || it1->second == 2)) {
				it2 = members.end();
				it1 = members.end();
				taxis++;
			}

			else if (it2->second == 1 && it1->second > 2) {
				it2 = members.end();
				it1->second -= 2;
				taxis++;
				int tax = ceil((double)it1->second / 4);
				taxis += tax;
			}
		}
		else if (it2 == members.end()) {
			int tax = ceil((double)it1->second / 4);
			taxis += tax;
		}

	}

	// We have groups of 3 and don't have groups of 1

	if (it1 == members.end() && it3 != members.end()) {
		
		if (it2 != members.end()) {

			if (it2->second == 1) {
				taxis = taxis + it3->second + 1;
				it3 = members.end();
				it2 = members.end();

			}

		}

		else if (it2 == members.end()) {
			taxis += it3->second;
			it3 = members.end();
		}

	}

	if (it1 == members.end() && it3 == members.end()) {
		if (it2 != members.end()) {
			taxis += 1;
			it2 = members.end();
		}
	}

	cout << taxis;
}