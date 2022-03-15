#include <bits/stdc++.h>
using namespace std;
int main() {
	int lecture_words_count, my_dictionary_size;
	cin >> lecture_words_count >> my_dictionary_size;
	map<string, string> my_dictionary;

	for (int i = 0; i < my_dictionary_size; i++) {
		string lang1, lang2;
		cin >> lang1 >> lang2;
		my_dictionary[lang1] = lang2;
	}

	vector<string> lecture_words, Notes;
	for (int i = 0; i < lecture_words_count; i++) {
		string temp;
		cin >> temp;
		lecture_words.push_back(temp);
	}


	for (auto word : lecture_words) {
		auto it = my_dictionary.find(word);

		if (it != my_dictionary.end()) {
			if ((it->first).size() <= (it->second).size())
				Notes.push_back(it->first);
			else
				Notes.push_back(it->second);
		}

	}

	for (int i = 0; i < Notes.size(); i++) {
		cout << Notes[i];
		if (i != Notes.size() - 1)
			cout << " ";
	}

}