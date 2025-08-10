#include <iostream>
using namespace std;

int main() {
		int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int maxSum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i + 1 < n && j + 1 < m) {
				int currentSum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
				if (currentSum > maxSum) {
					maxSum = currentSum;
				}
			}
		}
	}
	cout << maxSum << endl;
	cout << "Maximum sum of 2x2 submatrix: " << maxSum << endl;
	cout << "ok";
	cout << "ket qua a va c";
	return 0;
}
