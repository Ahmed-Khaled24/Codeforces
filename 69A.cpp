#include <iostream>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main() {
	int N; cin >> N; // Number of forces
	stack<std::vector<int>> Forces;
	/*auto it = Forces.begin();*/

	// Read the value of each force and store in vector in set.
	for (int i{}; i < N; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		vector <int> Force{ x,y,z };
		Forces.push(Force);	
	}
	
	// Get the sum of the forces
	int X{}, Y{}, Z{};
	while (!Forces.empty()) {
		vector<int> Force = Forces.top();
		X += Force.at(0);
		Y += Force.at(1);
		Z += Force.at(2);
		Forces.pop();
	}
	
	//Print the result
	if (X == 0 && Y == 0 && Z == 0) {
		cout << "YES";
	}
	else cout << "NO";
	
}