#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int NumberOfRooms; cin >> NumberOfRooms;
	unordered_multimap<int, int> RoomsDetails;

	for (int i{}; i < NumberOfRooms; i++) {
		int p, q; cin >> p >> q;

		RoomsDetails.emplace(p,q);
	}

	int AvailableRooms{};
	auto it = RoomsDetails.begin();
	
	while (it != RoomsDetails.end()) {

		if ((it->second-it->first) >= 2)	AvailableRooms++;

		it++;
	}

	cout << AvailableRooms;
}