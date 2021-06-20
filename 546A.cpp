#include <iostream>
#include <vector>
using namespace std;
int main() {
    int BananaCost;  cin >> BananaCost;
    int Dollers;     cin >> Dollers;
    int Bananas;     cin >> Bananas;
    int cost{ BananaCost };
    int Loan{};

    while (Bananas) {

        if (Dollers >= cost) {
            Bananas--;
            Dollers -= cost;
            cost += BananaCost;     
        }

        else if (Dollers < cost) {
            Loan += (cost - Dollers);
            cost += BananaCost;
            Dollers = 0;
            Bananas--;
        }

    }

    cout << Loan;

}