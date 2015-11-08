/*
 * arrptrdemo.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#include <stdio.h>
#include <stdlib.h>

void arrptrdemo(void);
void basics(void);
void ptrArithmetic(void);
void ptrToPtr(void);
void ptrAndArray(void);
int getSum(int [],int);

void arrptrdemo() {
//	system("pause");
//	basics();
//	ptrArithmetic();
//	ptrToPtr();
	ptrAndArray();
}

void basics() {
	int a,b;
	int *p=&a; /*pointer p holds the address of a*/

	a = 8;
	b = 10;

	printf("a = %d\n",a);
	printf("p = %d, address of a = %d\n",p,&a);
	printf("*p = %d, *&a = %d\n",a,*&a);

	*p = b;	/*value at address given by p i.e. a, equals value of b*/
	printf("Now, a = %d\n",a);
}

void ptrArithmetic() {
	int a= 2049;
	int *p = &a;
	printf("Value at %d is %d\n",p,*p);
	char *pc = (char*) p;
	printf("Value at %d is %d\n",pc,*pc);
	printf("Value at %d is %d\n",pc+1,*(pc+1));

	void* pv;
	pv = p;
	printf("Value at address %d is %d\n",pv,*((char*)pv));
	printf("Value at address %d is %f\n",pv,*((float*)pv));
}

void ptrToPtr() {
	int a = 8;
	int* p;
	int** q;

	p = &a;
	q = &p;

	printf("a = %d\n",a);
	printf("p = %d, *p = %d\n",p,*p);
	printf("q = %d, *q = %d, **q = %d\n",q,*q,**q);
	printf("\n");
	printf("\n");
}

void ptrAndArray() {
	int A[] = {7,3,5,0,1};
	int *p;
	int i;
	int size_A = sizeof(A)/sizeof(int);

	p = A;

	printf("First element of array: %d\n",A[0]);
	printf("Address of first element: %d\n",&A[0]);
	printf("Address of the array: %d\n",A);
	printf("*p = %d\n",p);
	for (i=1;i<size_A;i++)
		printf("*(p+%d) = %d\n",i,*(p+i));

	printf("Sum of the array is %d\n",getSum(A,size_A));

	int a=8;
	p = &a;
	printf("A number at five 500 from variable a, has the value %d\n",p[500]);
	printf("Sum of the array is %d\n",getSum(p,200));

}


int getSum(int A[], int size) {
	int i;
	int sum=0;
	for(i=0;i<size;i++) {
		sum += A[i];
	}
	return sum;
}
