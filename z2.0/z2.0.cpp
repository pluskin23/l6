#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(0, "rus");

	const int nmax = 100;
	int m[nmax];
	int mTwo[nmax];
	int n;
	cout << "¬ведите размер массива: " << endl;
	cin >> n;
	int i = 0;
	for (; i < n; i++) {
		cout << "¬ведите значение элемента массива: " << endl << "m[" << i << "]=" << endl;
		cin >> m[i];
	}
	int size = n;
	n--;
	for (int i = 0; n != -1; i++, n--) {
		mTwo[n] = m[i];
	}
	for (int i = 0; i < size; i++) {
		cout << endl << endl << mTwo[i];
	}

	system("pause");
	return 0;
}