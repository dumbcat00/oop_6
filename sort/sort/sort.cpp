#include "bubble_sort.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "Введите количество элементов массива типа int: ";
	cin >> n;
	int* a = new int[n];
	cout << "Введите массив типа int:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "Введите количество элементов массива типа double: ";
	cin >> m;
	double* b = new double[m];
	cout << "Введите массив типа double:" << endl;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(n, a);
	cout << "Отсортированный массив типа int: ";
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	
	cout << endl;
	

	sort(m, b);
	cout << "Отсортированный массив типа double: ";
	for (int i = 0; i < m; i++) 
		cout << b[i] << " ";
	
	return 0;
}