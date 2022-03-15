#include <bits/stdc++.h>
using namespace std;

int Minimum_Extraction(vector<int> &V) {
	sort(V.begin(), V.end());
	set<int> minSet;
	minSet.insert(V.at(0));

	for (int i = 1; i < V.size(); i++) {
		int temp = V.at(i) - V.at(i - 1);
		minSet.insert(temp);
	}

	return *minSet.rbegin();
}

void create_vector(int size, vector<int> &temp) {
	for (int i = 0; i < size; i++) {
		int t; cin >> t;
		temp.push_back(t);
	} 
}

int main() {
	int test_cases; 
	cin >> test_cases;
	vector<int> Answer;

	for (int i = 0; i < test_cases; i++)
	{
		int tempSize; cin >> tempSize;
		vector <int> tempVec;
		create_vector(tempSize, tempVec);
		int max_min = Minimum_Extraction(tempVec);
		Answer.push_back(max_min);

	}

	for (const int &i : Answer)
		cout << i << endl;
}