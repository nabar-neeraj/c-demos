/*
 * arraydemos.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#include<stdio.h>
#include<stdlib.h>

void displayArraySize(int a[])
{
	int* ptr = a;
	int size = 0;
	while(*ptr != NULL) {
		size++;
		ptr++;
	}
	printf("Size of the array is %d\n",size);
}
