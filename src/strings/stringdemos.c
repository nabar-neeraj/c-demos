/*
 * stringdemos.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#include <stdio.h>
#include <stdlib.h>

/*Strings as character arrays*/

void stringdemos(void);
void nullCharDemo(void);
void charArrStringDemo(void);

void stringdemos() {
//	nullCharDemo();
	charArrStringDemo();
}

void nullCharDemo() {
	char name[7] = {'N','e','e','r','a','j','\0'};
	int size_name = sizeof(name)/sizeof(name[0]);
	int i;
	for(i=0;i<size_name;i++)
		printf("%c %2x\n",name[i],(int)*(name+i));
	printf("%s\n",name);
}

void charArrStringDemo(void) {
//	char name[6] = "Neeraj";	/*will cause overflow, example output: NeerajÄ[ít0%@*/

/*	char name[7];		This gave an error: incompatible types when assigning to type 'char[7]' from type 'char *'
	name = "Neeraj";			*/

	char name[7] = "Neeraj";	/*this should work fine.*/
	printf("%s\n",name);

//	name = name+2;   Illegal. name is of type char[7] but name+2 is of char*???
	char* ptr;
	ptr = name;
	printf("%s\n",ptr);
	ptr++;
	printf("%s\n",ptr);

}
