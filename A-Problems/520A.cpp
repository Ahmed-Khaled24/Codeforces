#include <bits/stdc++.h>
using namespace std;
int main() {
	int size; cin >> size;

	if (size < 26)
		cout << "NO";

	else {
		set<char> alphatet;
		for (int i = 0; i < size; i++) {
			char temp; cin >> temp;
			temp = tolower(temp);
			alphatet.insert(temp);
		}

		if (alphatet.size() == 26)
			cout << "YES";
		else cout << "NO";
	}	
}