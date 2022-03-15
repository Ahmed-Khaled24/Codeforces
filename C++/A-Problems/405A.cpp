#include <iostream>
#include <set>
using namespace std;
int main() {
	int n; cin >> n;
	multiset<int> numbers;

	for (int i{}; i < n; i++) {
		int temp; cin >> temp;
		numbers.insert(temp);
	}
	
	for (auto number : numbers) {
		cout << number << " ";
	}
}