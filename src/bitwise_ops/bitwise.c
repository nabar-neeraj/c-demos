/*
 * bitwise.c
 *
 *  Created on: Nov 8, 2015
 *      Author: neeraj
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG(X) printf("%d\n",x);

void swapXor(int *,int *);
int getNumOnes(unsigned int);
int getNumOnesBig(unsigned int);
void shiftDemo(void);
int getOnlySetBitPos(int);

void swapXor(int *x,int *y) {
	*x = *x ^ *y;
	*y = *y ^ *x;
	*x = *x ^ *y;
}

int getNumOnes(unsigned int x) {
	if(x==0)
		return 0;
	int count=0;
	do {
		x = x & (x-1);
		count++;
	}while(x != 0);
	return count;
}

int getNumOnesBig(unsigned int x) {
	int i=0,lut[256];
	int bigCount=0;
	int mask=255, masked_bits = 0;
//	Create a lookup table
	if(x==0)
		return 0;
	for(i=0;i<256;i++) {
		lut[i]=getNumOnes(i);
	}
//	Use shift operations to get no. of ones in a big number
	for(i=0;i<4;i++) {
		masked_bits = x&255;
		bigCount += lut[masked_bits];
		x = x>>8;
	}
	return bigCount;
}

void shiftDemo() {
	int a = -1;
	printf("Before shift, a = %d\n",a);
	printf("After left shift, a = %d\n",a<<1);
	printf("After right shift, a = %d\n",a>>1);

}

int getOnlySetBitPos(int x) {
	int pos=0, num;
	num=x;
	while(num != 1) {
		pos++;
		num >>= 1;
	}
	return pos;
}
