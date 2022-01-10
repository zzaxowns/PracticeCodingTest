#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) {
	int i, j; 

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
	return;
}

void SelectionSort(int a[], int n) {
	int i, j;
	int minIndex;

	for (i = 0; i < n - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < n; j++) {

			if (a[j] < a[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
			swap(&a[minIndex], &a[i]);
	}
}

int main() {
	

	return 0;
}