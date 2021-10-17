#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int t; cin >> t;
	vector <char> Queue;

	//Read data.
	while (n) {
		char c; cin >> c;
		Queue.push_back(c);
		n--;
	}
	
	//Process the data.
	for (int i = 0; i < t; i++) {

		int j{};

		while (j < Queue.size()) {

			if (j < Queue.size() - 1) {

				if (Queue.at(j) == 'B' && Queue.at(j + 1) == 'G') {

					std::swap(Queue.at(j), Queue.at(j + 1));
					j += 2;

				}
				else j++;
					
			}
			else j++;
		}	
	}

	//Print.
	for (const auto& a : Queue) {
		cout << a;
	}
	cout << std::endl;

}