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

// 퀵 소트
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


//힙정렬
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
//		// 현재 노드의 자식노드 중 더 작은 자식노드를 찾는다. 
//		if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
//			child++;
//
//		if (temp.key >= h->heap[child].key)
//			break;
//
//		// 한 단계 아래로 이동
//		h->heap[parent] = h->heap[child];
//		parent = child;
//		child *= 2;
//	}
//
//	h->heap[parent] = temp;
//	return item;
//}

// 병합 정렬
//void Merge(int list[], int left, int mid, int right) {
//	int i = left;
//	int j = mid + 1;
//	int k = left;
//
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j]) {
//			sorted[k] = list[i];
//			i++;
//		}
//		else {
//			sorted[k] = list[j];
//			j++
//		}
//		k++;
//	}
//
//	if (i > mid) {
//		while (j <= right) {
//			sorted[k] = list[j];
//			j++;
//		}
//	}
//	else if (j > right) {
//		while (i <= mid) {
//			sorted[k] = list[i];
//			i++;
//		}
//	}
//	k++;
//	for (int x = left; x <= right; x++) {
//		list[x] = sorted[x];
//	}
//
//	return;
//}
//
//void Merge_Sort(int list[], int left, int right) {
//	int mid = (left + right) / 2;
//
//	if (left < right) {
//		Merge_Sort(list, left, mid);
//		Merge_Sort(list, mid + 1, right);
//		Merge(list, left, mid, right);
//	}
//
//	return;
//}

//셸 정렬
//void inc_insertion_sort(int list[], int first, int last, int gap)
//{
//	int i, j, key;
//
//	for (i = first + gap; i <= last; i = i + gap) {
//		key = list[i];
//		for (j = i - gap; j >= first && key < list[j]; j = j - gap)
//			list[j + gap] = list[j];
//		list[j + gap] = key;
//	}
//
//	return;
//}
//
//void shell_sort(int list[], int n)   // n: size
//{
//	int i, gap;
//
//	for (gap = n / 2; gap > 0; gap = gap / 2) {
//		if ((gap % 2) == 0)
//			gap++;
//		for (i = 0; i < gap; i++)
//			inc_insertion_sort(list, i, n - 1, gap);
//	}
//	return;
//}

//기수 정렬
//void radix_sort(int list[], int n)
//{
//	int i, b, d, factor = 1;
//	QueueType queues[BUCKETS];
//
//	for (b = 0; b < BUCKETS; b++)
//		init_queue(&queues[b]);
//
//	for (d = 0; d < DIGITS; d++) {
//		for (i = 0; i < n; i++)
//			enqueue(&queues[(list[i] / factor) % 10], list[i]);
//
//		i = 0;
//		for (b = 0; b < BUCKETS; b++) {
//			while (!is_empty(&queues[b])) {
//				list[i] = dequeue(&queues[b]);
//				i++;
//			}
//		}
//		factor *= 10;
//	}


int main() {
	

	return 0;
}