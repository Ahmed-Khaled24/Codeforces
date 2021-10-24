#include <iostream>
#include <string>
using namespace std;
int main(){

	int n; cin >> n;
	int counter{ 1 };

	while (n) {
		
		if (counter % 2 == 1)
			cout << "I hate ";
		else if (counter % 2 == 0)
			cout << "I love ";

		if (n > 1)
			cout << "that ";
		else cout << "it ";

		n--;
		counter++;
	}
}