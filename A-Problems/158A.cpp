#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
	int N; cin >> N;
	int K; cin >> K;

	vector <int > scores;

	while (N) {
		int temp; cin >> temp;
		scores.push_back(temp);
		N--;
	}

	int min = scores.at(K-1);
	int result{};

	for (auto a : scores) {
		if (a >= min && a != 0) {
			result++;
		}
	}

	cout << result;
}