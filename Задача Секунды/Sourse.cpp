#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int min, hour, sec;
	cin >> sec;
	min = sec / 60;
	hour = min / 60;
	cout <<hour << ':' << min << ':' << sec;
}