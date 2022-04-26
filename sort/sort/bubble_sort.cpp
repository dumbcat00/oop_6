#include "bubble_sort.h"

void sort(int n, double* a)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void sort(int n, int* a)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}
