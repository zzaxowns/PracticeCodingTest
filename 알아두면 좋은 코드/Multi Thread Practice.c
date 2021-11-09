#define WIN32_LEAN_AND_MEAN
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

DWORD WINAPI ThreadFunc(LPVOID);

int global = 1;

int main() {
	HANDLE hThrd;
	DWORD threadId;
	int i;

	for (i = 0; i < 5; i++) {
		hThrd = CreateThread(NULL, 0, ThreadFunc, (LPVOID)i, 0, &threadId);

		if (hThrd) {
			printf("Thread launched %d\n", i);
			CloseHandle(hThrd);
		}
	}

	Sleep(1000);

	return EXIT_SUCCESS;
}

DWORD WINAPI ThreadFunc(LPVOID n) {
	int i;

	for (i = 0; i < 100; i++) {
		printf("%d%d%d%d%d%d%d%d global = %d\n", n, n, n, n, n, n, n, n, global++);
	}

	return 0;
}