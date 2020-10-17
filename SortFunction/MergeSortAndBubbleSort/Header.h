#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define EXIT_PROGRAM -1

void bubble_sort(int arr[], int size);
void my_swap(int* a, int* b);
void MergeSort(int arr[], int size);
void Merge(int res[], int left[], int size_left, int right[], int size_right);
void check_allocation(void* ptr);