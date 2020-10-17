#include "Header.h"

void bubble_sort(int arr[], int size) {
	int i, j;
	for (i = 0; i < size-1; i++) {
		for (j = 0; j < size - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				my_swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void my_swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}