/*
 * sizesof.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#include<stdio.h>
#include "sizesof.h"

void showSizesOf() {
	printf("Size of char is %d bytes\n",sizeof(char));
	printf("Size of int is %d bytes\n",sizeof(int));
	printf("Size of long is %d bytes\n",sizeof(long));
	printf("Size of long long is %d bytes\n",sizeof(long long));
	printf("Size of float is %d bytes\n",sizeof(float));
	printf("Size of double is %d bytes\n",sizeof(double));
	printf("Size of long double is %d bytes\n",sizeof(long double));
}
