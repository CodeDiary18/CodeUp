#include<iostream>
#include <iomanip> //소수점 고정하기 위해 필요
using namespace std;

int main() {
	float x;
	cin >> x;
	cout << fixed<<setprecision(6)<<x; //소수점 고정
	return 0;
}
