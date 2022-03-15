#include <iostream>
#include <vector>

using namespace std;
int main() {
	long long number_of_houses, number_of_tasks, time_units{ 0 }, current_location{1};
	cin >> number_of_houses >> number_of_tasks;
	vector<long long> tasks_location;

	for (int i = 0; i < number_of_tasks; i++) {
		int temp; cin >> temp;
		tasks_location.push_back(temp);
	}

	for (auto target_location : tasks_location) {
		
		if (current_location < target_location)
			time_units += (target_location - current_location);
		else if (current_location > target_location)
			time_units += (number_of_houses - current_location + target_location);

		current_location = target_location;
	}

	cout << time_units;
}