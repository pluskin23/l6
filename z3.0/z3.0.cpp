#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "rus");

	const int nmax = 100;
	int m[nmax];
	int n, k;
	cout << "¬ведите размер массива: " << endl;
	cin >> n;
	cout << "¬ведите значение сдвига: " << endl;
	cin >> k;
	int i = 0;

	cout << "¬ведите значени€: " << endl;
	for (; i < n; i++) {
		cout << "m[" << i << "]=";
		cin >> m[i];
	}

	cout << endl;

	while (k >= n) {
		k = k - n;
	}

	cout << "—двиг= " << k << endl << endl;

	for (i = 0; i < n - k; i++) {
		int mem = m[i];
		m[i] = m[i + k];
		m[i + k] = mem;
	}

	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
		cout << endl << endl;
	}
	system("pause");
	return 0;
}