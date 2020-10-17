#include"Header.h"

void MergeSort(int arr[], int size) {
	int* ptr;

	if (size <= 1) {
		return;
	}

	MergeSort(arr, size / 2);
	MergeSort(arr + size / 2,size - size / 2);
	ptr = (int*)malloc(sizeof(int)*size);
	check_allocation(ptr);
	Merge(ptr, arr, size / 2, arr + size / 2, size - size / 2);

	for (int i = 0; i < size; i++) {
		arr[i] = ptr[i];
	}
	free(ptr);
}

void Merge(int res[], int left[], int size_left, int right[], int size_right) {
	int i = 0, j = 0;

	while (i < size_left && j < size_right) {
		if (left[i] < right[j]) {
			res[i + j] = left[i++];
		}
		else {
			res[i + j] = right[j++];
		}
	}
	while (i < size_left) {
		res[i + j] = left[i++];
	}
	while (j < size_right) {
		res[i + j] = right[j++];
	}
}

void check_allocation(void* ptr) {
	if (ptr == NULL) {
		printf("allocation Fail!!");
		exit(EXIT_PROGRAM);
	}

}