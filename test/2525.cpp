#include <iostream>

using namespace std;

int main() {
	int a, b,c;
	cin >> a >> b;
	cin >> c;
	int d = c / 60;
	c = c % 60;
	b += c;
	if (b >= 60) {
		b -= 60;
		a += 1;
	}
	a += d;
	if (a >= 24) {
		a -= 24;
	}
	cout << a<<" "<<b;
}