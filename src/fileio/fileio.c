/*
 * fileio.c
 *
 *  Created on: Nov 8, 2015
 *      Author: neeraj
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void filedemo(void);

/*
There are 3 steps involved in File I/O:
	1. Open the file			fptr = fopen(filename,mode);
	2. Perform read/write
	3. Close the file

*	File I/O functions are located in stdio.h
*	File pointers are of type FPTR
*	mode is a char* type (string):
*		"r":	read
*		"w":	write

*	Input file must exist for reading, this is not necessary for output file.
*
*/

void filedemo() {
	FILE *infile,*outfile;
	char *mode = "w";
	char outfilename = "records.txt";
	int numRec;
	char fname[20],lname[20];
	int age;
	int i,j,k;
//	printf("Enter number of records:\n");
//	scanf("%d",&numRec);

	outfile = fopen(outfilename,mode);
	fprintf(outfile,"Hello, World!\n");
//	for(i=0;i<numRec;i++) {
//		printf("First name:\t");
//		scanf("%s",fname);
//		printf("Last name:\t");
//		scanf("%s",lname);
//		printf("Age:\t");
//		scanf("%d",age);
//		fprintf(outfile,"%s,%s,%d",fname,lname,age);
//	}
	fclose(outfile);

}
