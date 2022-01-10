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


int main() {
	

	return 0;
}