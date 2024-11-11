#include<iostream>
using namespace std;
void main() {
	int x;
	int t;
	int* foo;
	foo = new int[20];
	cin >> x;
	for (int y = 0; y < x; y++) {
		cin >> foo[y];
	}
	for (int i = 0; i < x - 1; i++) {
		for (int j = 0; j < x - i - 1; j++) {
			if (foo[j] > foo[j + 1]) {
				t = foo[j];
				foo[j] = foo[j + 1];
				foo[j + 1] = t;
			}
		}
	}
	for (int y = 0; y< x; y++) {
		cout << foo[y];
	}
	delete[] foo;
}