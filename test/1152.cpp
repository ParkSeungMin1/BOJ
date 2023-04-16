#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	std::string::size_type n;
	int cnt = 1;
	getline(cin, a);
	for (;;) {
		n = a.find(' ');
		if (n == string::npos) {
			break;
		}
		else {
			cnt++;
			a = a.substr(n + 1);
		}
	}
	cout << cnt;
}