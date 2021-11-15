#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(0, "rus");

	const int nmax = 100;
	int arr[nmax];
	int n;
	int max = 0;
	cout << "Введите размер массива: " << endl;
	cin >> n;
	double c;
	cout << "Введите значение С: "<< endl;
	cin >> c;
	int i = 0;
	int count;

	int S = 1;
	for (; i < n; i++) {
		cout << "Введите значение элемента массива" << endl << "m[" << i << "]= " << endl;
		cin >> arr[i];
		if (abs(arr[i]) > max) {
			max = abs(arr[i]);
			count = i;
		}
	}

	cout << "Вывод чисел > C: ";
	for (int j = 0; j < n; j++) {
		if (arr[j] > c) {
			cout << endl << arr[j] << "\t";
		}
	}

	for (int i = count + 1; i < n; i++) {
		S *= arr[i];
	}
	cout << endl << endl << S << endl;
	system("pause");
	return 0;


}