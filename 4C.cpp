#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
int main() {
	int N; cin >> N;
	vector <string> Names;
	while (N) {
		string temp; cin >> temp;
		Names.push_back(temp);
		N--;
	}
	
	map<string, int> processing;
	vector <string> result;
	for (auto name : Names) {
		auto it = processing.find(name);
		if (it == processing.end()) {
			processing[name] = 0;
			result.push_back("OK");
		}
		else if (it != processing.end()) {
			processing[name]++;
			stringstream temp;
			temp << name << it->second;
			string temp_;
			temp_ = temp.str();
			result.push_back(temp_);
		}
	}

	for (auto s : result) { cout << s << endl; }

}