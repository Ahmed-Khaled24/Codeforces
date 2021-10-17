//#include <iostream>
//#include <string>
//#include <vector>
//#include <math.h>
//using namespace std;
//bool CheckLucky(const int &a) {
//	int Digits{}, temp{a};
//	//Count the digits
//	while (temp != 0) {
//		temp /= 10;
//		Digits++;
//	}
//	vector<int> Numbers(Digits, 0);
//	//Store digits in vector
//	temp = a;
//	for (int i{}; i < Numbers.size(); i++) {
//		Numbers.at(i) = temp % 10;
//		temp /= 10;
//	}
//	//Check if the number is lucky
//	int indecator{};
//	for (auto a : Numbers) {
//		if (a == 4 || a == 7)
//			indecator++;
//		else break;
//	}
//	if (indecator == Digits)
//		return true;
//	else return false;
//
//}
//
//int main() {
//	int input; cin >> input; 
//	if (CheckLucky(input) || CheckLucky(ceil(double(input) / 4)) || CheckLucky(ceil(double(input) / 7)))
//		cout << "YES";
//	else cout << "NO";
//
//}