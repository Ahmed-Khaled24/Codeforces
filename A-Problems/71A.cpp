#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std; 

void  abbriviation(vector <string>& object) {
	for (auto a : object) {
		if (a.length() <= 10) {
			cout << a << endl;
		}
	
		else if (a.length() > 10) {
			cout << a.front() << a.length() - 2 << a.back() << endl;
		}

	}
}

int main() {
	int n{};
	cin >> n;
	cout << endl;
	if (1 <= n && n <= 100) {
		vector<string> lines(n);

		for (int i = 0; i < n; i++) {
			cin >> lines.at(i);
		}
		
		abbriviation(lines);

	}
	else
		return 0;
}