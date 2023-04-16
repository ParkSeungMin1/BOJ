#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int tmp=1;
	int i = 2;
	for (;; i++) {
		if (n <= tmp) {
			i -= 1;
			tmp = tmp - i;
			break;
		}
		else {
			tmp += i;
		}
	}
	
	if (i % 2 == 0) { // 오른쪽위에서 왼쪽아래로
		cout << n - tmp << "/" << (i + 1) - (n - tmp);
	}
	else {
		cout << (i + 1) - (n - tmp)  << "/" <<  n - tmp;
	}
	
}