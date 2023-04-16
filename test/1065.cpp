#include <iostream>

using namespace std;

int main() {
	int n, cnt=0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			cnt++;
		}
		else if (i < 1000) {
			if ((i / 100) - (i % 100 / 10) == (i %100 / 10) - (i % 10)) {
				cnt++;
			}
		}
	}
	cout << cnt;
}