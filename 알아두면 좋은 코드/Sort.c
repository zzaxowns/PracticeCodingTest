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

// �� ��Ʈ
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


//������
//void insert_max_heap(HeapType* h, element item) {
//	int i;
//	i = ++(h->heap_size);
//
//	while ((i != 1) && (item.key > h->heap[i / 2].key)) {
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//
//	h->heap[i] = item;
//	return;
//}
//
//element delete_max_heap(HeapType* h) {
//	int parent, child;
//	element item, temp;
//	item = h->heap[1];
//	temp = h->heap[(h->heap_size)--];
//	parent = 1;
//	child = 2;
//
//	while (child <= h->heap_size) {
//		// ���� ����� �ڽĳ�� �� �� ���� �ڽĳ�带 ã�´�. 
//		if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
//			child++;
//
//		if (temp.key >= h->heap[child].key)
//			break;
//
//		// �� �ܰ� �Ʒ��� �̵�
//		h->heap[parent] = h->heap[child];
//		parent = child;
//		child *= 2;
//	}
//
//	h->heap[parent] = temp;
//	return item;
//}



int main() {
	

	return 0;
}