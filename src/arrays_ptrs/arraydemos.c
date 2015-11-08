/*
 * arraydemos.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#include<stdio.h>
#include<stdlib.h>

void displayArraySize(int a[]) {
	int* ptr = a;
	int size = 0;
	while (*ptr != NULL) {
		size++;
		ptr++;
	}
	printf("Size of the array is %d\n", size);
}

void merge() {
	int a[3] = { 1, 2, 3 };
	int b[4] = { 3, 4, 5, 6 };

	int l1 = 3, l2 = 4;

	int sorted_array[l1 + l2];
	int* sortedArrayPtr = sorted_array;
	int *arrayOfPtrs[2] = { a, b };

	int tl = l1 + l2;
	int i;
	for (i = 0; i < tl; i++) {
		int j = 0, k = 0;
		if (j < l1 && k < l2) {
			if (*arrayOfPtrs[0] < *arrayOfPtrs[1]) {
				*sortedArrayPtr = *arrayOfPtrs[0];
				sortedArrayPtr++;
				arrayOfPtrs[0]++;
			} else if (*arrayOfPtrs[0] > *arrayOfPtrs[1]) {
				*sortedArrayPtr = *arrayOfPtrs[1];
				sortedArrayPtr++;
				arrayOfPtrs[1]++;
			} else if (*arrayOfPtrs[0] == *arrayOfPtrs[1]) {
				*sortedArrayPtr = *arrayOfPtrs[1];
				sortedArrayPtr++;
				arrayOfPtrs[0]++;
				arrayOfPtrs[1]++;
			}
			j++;
			k++;
		}
		if (j == l1 && k < l2) {
			*sortedArrayPtr = *arrayOfPtrs[1];
			sortedArrayPtr++;
			arrayOfPtrs[1]++;
			k++;
		}
		if (k == l2 && j < l1) {
			*sortedArrayPtr = *arrayOfPtrs[0];
			sortedArrayPtr++;
			arrayOfPtrs[0]++;
			j++;
		}
	}
	*(sortedArrayPtr + 1) = NULL;
	int p = 0;
	sortedArrayPtr = sorted_array;
	while (sorted_array[p] != NULL) {
		printf("%d ", sorted_array[p]);
		p++;
	}
}
