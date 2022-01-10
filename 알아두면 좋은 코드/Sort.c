#include <iostream>

using namespace std;

//void bubbleSort(int a[], int n) {
//	int i, j; 
//
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1 - i; j++)
//			if (a[j] > a[j + 1])
//				swap(&a[j], &a[j + 1]);
//	return;
//}

//void SelectionSort(int a[], int n) {
//	int i, j;
//	int minIndex;
//
//	for (i = 0; i < n - 1; i++) {
//		minIndex = i;
//		for (j = i + 1; j < n; j++) {
//
//			if (a[j] < a[minIndex])
//				minIndex = j;
//		}
//
//		if (minIndex != i)
//			swap(&a[minIndex], &a[i]);
//	}
//}

//void InsertionSort(int a[], int n) {
//	int i, j;
//
//	for (i = 0; i < n; i++) {
//		j = i;
//		while (j > 0 && a[j - 1] > a[j]) {
//			swap(&a[j - 1], &a[j]);
//			j = j - 1;
//		}
//	}
//}

// Äü ¼ÒÆ®
//void quickSort(int a[], int start, int end) {
//	int pIndex;
//
//	if (start >= end)
//		return;
//	else {
//		pIndex = partition(a, start, end);
//		quickSort(a, start, pIndex - 1);
//		quickSort(a, pIndex + 1, end);
//	}
//}
//
//int partition(int a[], int start, int end) {
//	int pivot, pIndex, i;
//
//	pivot = a[end];
//	pIndex = start;
//	for (i = start; i < end; i++)
//		if (a[i] < pivot) {
//			swap(&a[i], &a[pIndex]);
//			pIndex++;
//		}
//	swap(&a[pIndex], &a[end]);
//
//	return pIndex;
//}

int main() {
	

	return 0;
}