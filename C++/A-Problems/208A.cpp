#include <iostream>
#include <string>
using namespace std;
int main() {
	string remixed_song;
	cin >> remixed_song;
	
	while (true) {
		int pos = remixed_song.find("WUB"); // Get the position of the first occurance of WUB.

		if (remixed_song.find("WUB") == string::npos)	// If there is no WUB we get out of the loop.
			break;

		else { // Otherwise we loop and erase every WUB from our string using string library functions.

			if (pos != 0) { // This to avoid insreting space in the first of the string and to prevent adding more than one space in the same position.

				if (remixed_song.at(pos - 1) != ' ') { // If pos-1 not equal space [more than one space check] 
					remixed_song.insert(pos + 3, " ");
				}
			}

			remixed_song.erase(pos, 3);
		}

	}

	cout << remixed_song;
	
}