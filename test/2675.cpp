#include <iostream>

using namespace std;

int main() {
	int n,tmp;
	string a;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		string result = "";
		cin >> tmp;
		cin >> a;
		for (; a.size();) {
			for (int j = 0; j < tmp; j++) {
				result += a.front();
			}
			a = a.substr(1);
		}
		cout << result << endl;
	}
}