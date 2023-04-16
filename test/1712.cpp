#include <iostream>

using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if (b == c) {
		cout << -1;
		return 0;
	}
	long long d = a / (c - b) + 1;
	
	if (d <= 0) cout << -1;
	else cout << d;
}