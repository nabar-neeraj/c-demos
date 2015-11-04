/*
 * main.c
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
	struct ListNode *n1, *n2, *n3;
	struct ListNode *head;
	n1 = createNode(1);
	n2 = createNode(2);
	n3 = createNode(3);

	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	printf("Linked List length = %d\n", getLength(head));
	traverseList(head);
	insertAtStart(&head,50);
	printf("Linked List length = %d\n", getLength(head));
	traverseList(head);
	insertAtEnd(&head,100);
	printf("Linked List length = %d\n", getLength(head));
	traverseList(head);

	insertAtPos(&head,42,1);
	traverseList(head);


	return 0;
}
