#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int arr[26]={0};
	int best_index = -1;
	int best_count = 0;
	int max = 0;
	string a;
	cin >> a;
	char tmp;
	for (int i = 0; i < a.size(); i++) {
		a[i] = tolower(a[i]);
		tmp = a[i];
		arr[tmp - 97] += 1;
	}
	max = arr[0];
	for (int i = 1; i < 26; i++) {
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < 26; i++) {
		if (max == arr[i]) {
			best_count++;
			best_index = i;
		}
	}
	if (best_count == 1) cout << (char)((char)best_index+65);
	else cout << "?" ;
}