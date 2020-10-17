#include "Header.h"

void main() {
	int arr1[] = { 100,4,5,50, 10, 200 };
	int arr2[] = { 100,4,5,50, 10, 200 };

	MergeSort(arr1, 6);
	bubble_sort(arr2, 6);

	PrintArr(arr1, 6);
	PrintArr(arr2, 6);

	system("pause");
}

PrintArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("%c", '\n');
}