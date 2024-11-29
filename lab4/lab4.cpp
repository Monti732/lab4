#include <iostream>
using namespace std;

int main() {
	int a[10] = { 1,3,2,-55,6,7,10,8,12,44 };
	int max, min;
	max = a[0];
	min = a[0];

	for (int i = 1; i < 10; ++i) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}

	for (int i = 0; i < 10; ++i) { 
		cout << a[i] << " ";
	}

	cout << endl;
	a[0] = max;
	a[9] = min;

	for (int i = 0; i < 10; ++i) { 
		cout << a[i] << " ";
	}
}