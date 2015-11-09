/*
 * prepdir.c
 *
 *  Created on: Nov 8, 2015
 *      Author: neeraj
 */
/*
*	Demo of preprocessor directives
*
*
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) ((x)>(y)?(x):(y))
#define EVER ;;
#define BYTEFLIP(x) (((x)&(240))>>(4))|(((x)&(15))<<(4))

void prepdirdemo() {
	unsigned char c = 0;
	printf("%d\n",8);
	printf("%d\n",MAX(76,89));

	int i=0;
	for(EVER) {
		printf("%2d\n",i);
		if(i >= 10) {
			break;
		}
		i++;
	}

	for(i=0;i<256;i++) {
		printf("%3d\t",c);
		printf("%3d\n",BYTEFLIP(c));
		c++;
	}
}
