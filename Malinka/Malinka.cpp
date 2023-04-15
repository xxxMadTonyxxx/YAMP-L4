#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int i, N;
	cout << "Введите размер массива" << endl;
	cin >> N;
	int* A = new int[N];
	for (i = 0; i < N; i++) {
		*(A + i) = rand() % 101 - 50;
	}
	cout << endl << "Исходный массив" << endl;
	for (i = 0; i < N; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl;
	bool flag = false;
	for (i = 0; i < N; i++) {
		if (*(A + i) < 0) {
			flag = true;
		}
	}
	if (flag) {
		int summ = 0;
		cout << "Отрицательные элементы массива" << endl;
		for (i = 0; i < N; i++) {
			if (*(A + i) < 0) {
				summ += *(A + i);
			}
		} cout << summ << endl;
	}
	else {
		cout << "Нет отрицательных элементов массива" << endl;
	}
	cout << "Вдреса чётных элементов массива" << endl;
	for (i = 0; i < N; i++) {
		if (*(A + i) % 2 == 0) {
			cout << (A + i) << " ";
		}

	}
}
