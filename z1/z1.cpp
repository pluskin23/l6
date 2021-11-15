#include <iostream>
#include <cmath>
#include <random>

using namespace std;

int main() {

	setlocale(0, "rus");

	int c;
	int step = 0;
	const int n = 100;
	float array[n];
	cout << "Введите С: ";
	cin >> c;

	for (int i = 0; i < n; i++) {
		array[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++) {
		if (array[i] > c) {
			step++;
		}
	}
	cout << step << endl;
	system("pause");
	return 0;
}