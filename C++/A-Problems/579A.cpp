#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; cin >> n;			/*The desired number of bacteria.*/
	int Number_of_bactirum = 0;

	while (true) {

		if (n == 0)
			break;
		
		double log_1 = log2(double(n));			/* log2 of  n */
		double log_2 = ceil(log2(double(n)));	/* log2 of n rounded up */

		if (log_1 == log_2)			/*if equal so one bactirum can do the whole work.*/
		{
			Number_of_bactirum++;
			n -= int( pow(2, log_1) );
		}
		else if (log_1 < log_2)	    /*if (log_1 < log_2) so subtract 2 power (log_2 - 1) from n and go into the loop again. */
		{
			Number_of_bactirum++;
			n -= int(  pow(2, log_2-1) );

		}
	}

	cout << Number_of_bactirum;
	return 0;
}