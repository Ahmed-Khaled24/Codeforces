#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main() {
	string in; cin >> in;
	multiset <char> result;
	for (auto a : in) {
		bool t = isdigit(a);
		if (t) {
			char temp = a;
			result.insert(temp);
		}
	}

	auto it = result.begin();
	if (result.size() == 1)
		cout << *it;
	else {

		while (it != result.end()) {
			cout << *it;
			it++;
			if (it != result.end())
				cout << "+";
		}
		
	}
	

}