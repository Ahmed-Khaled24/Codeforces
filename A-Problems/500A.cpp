#include <bits/stdc++.h>
using namespace std;

int main() {
	int number_of_cells, destination;
	cin >> number_of_cells >> destination;
	vector<int> a;

	for (int i = 0; i < number_of_cells - 1; i++) {
		int temp; cin >> temp;
		a.push_back(temp);
	}

	map<int, int> portals;
	for (int i = 0; i < a.size(); i++) {
		portals[i + 1] = i + 1 + a.at(i);
	}

	int current_postion = 1;
	auto it = portals.begin();

	while (true) {

		if (current_postion == destination) {
			cout << "YES";
			break;
		}

		current_postion = it->second;
		it = portals.find(current_postion);

		if (current_postion > destination) {
			cout << "NO";
			break;
		}
	}	
}