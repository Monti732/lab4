#include <iostream>
using namespace std;

int main() {
	int a[5][5];
	int max, min;

	max = a[0][0];
	min = a[0][0];
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			a[i][j] = rand() % 26;
		}
	}

	for (int i = 1; i < 5; ++i) {
		for (int j = 1; j < 5; ++j) {
			if (max < a[i][j]) max = a[i][j];
			if (min > a[i][j]) min = a[i][j];
		}
	}

	for (int i = 0; i < 5; ++i) {
		cout << endl;
		for (int j = 0; j < 5; ++j) {
			cout << a[i][j] << " ";
		}
	}

	cout << endl;
	a[0][0] = max;
	a[9][9] = min;

	for (int i = 0; i < 5; ++i) {
		cout << endl;
		for (int j = 0; j < 5; ++j) {
			cout << a[i][j] << " ";
		}
	}
}