#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

void SieveOfEratosthenes(int n, set<double> &set)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool* prime = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    };

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            set.insert(p);
}


int main() {
	set<double> Primes;
    SieveOfEratosthenes(1000000, Primes);

	vector<long double> inputs;
	int size; cin >> size;
	while (size) {
		long double temp; cin >> temp;
		inputs.push_back(temp);
		size--;
	}


	for (auto num : inputs) {
		double Square_root = sqrt(double(num));
		auto it = Primes.find(Square_root);

		if (it  != Primes.end())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	

}