#include <iostream>

using namespace std;

long long arr[10000][15];

int main() {
	int tc;
	int a, b;
	cin >> tc;
	
	for (int i = 1; i <= 14 ; i++) {
		arr[0][i] = i;
		arr[i][1] = 1;
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 2; j <= 14; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}


	for (int i = 0; i < tc; i++) {
		cin >> a >> b;
		cout << arr[a][b] << endl;
	}

	
}