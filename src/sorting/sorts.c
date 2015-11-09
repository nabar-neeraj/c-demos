/*
 * bubblesort.c
 *
 *  Created on: Nov 8, 2015
 *      Author: neeraj
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int*,int*);
void showArray(int *,int);
void bsort(int*,int);

void swap(int *x,int *y) {
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void bsort(int* arr, int size) {
	int i=0,j=0;
	for(i=0;i<size-1;i++) {
		for(j=0;j<size-i-1;j++) {
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void showArray(int *a,int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}
