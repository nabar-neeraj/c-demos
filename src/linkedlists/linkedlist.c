/*
 * linkedlist.c
 *
 *  Created on: Nov 3, 2015
 *      Author: neeraj
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void insertAtStart(struct ListNode** head, int data) {
	struct ListNode* newNode = createNode(data);
	newNode->next = *head;
	*head = newNode;
}

void insertAtEnd(struct ListNode* *head, int data) {
	struct ListNode* newNode = createNode(data);
	struct ListNode* ptr = *head;
	if (!*head) {
		printf("Empty node!!!\n\n");
		*head = newNode;
		return;
	}
	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = newNode;
}

void insertAtPos(struct ListNode** head, int data, int pos) {
	if (pos == 0) {
		insertAtStart(head, data);
	} else if (pos == -1) {
		insertAtEnd(head, data);
	} else if (pos > 0) {
		int k = 1;
		struct ListNode* ptr = *head;
		struct ListNode* newNode = createNode(data);
		while (ptr != NULL && k < pos) {
			ptr = ptr->next;
			k++;
		}
		newNode->next = ptr->next;
		ptr->next = newNode;
	} else {
		printf("Invalid index.\n");
	}
}

struct ListNode* createNode(int data) {
	struct ListNode* newNode;
	newNode = (struct ListNode*) malloc(sizeof(struct ListNode));
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}

int getLength(struct ListNode* head) {
	int len;
	len = 0;
	struct ListNode* ptr;
	ptr = head;
	while (ptr != NULL) {
		len++;
		ptr = ptr->next;
	}
	return len;
}

void traverseList(struct ListNode* head) {
	struct ListNode* ptr = head;
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int search(struct ListNode* head, int data) {
	struct ListNode* ptr;
	int pos = 0;
	ptr = head;
	while (ptr != NULL) {
		if (ptr->data == data) {
//			printf("Found at position %d\n",pos);
			return pos;
		}
		ptr = ptr->next;
		pos++;
	}
//	printf("Node with data = %d not found!!!\n",data);
	return -1;
}

void delete(struct ListNode** head, int pos) {
	struct ListNode* ptr = *head, *prev;
	int k = 0;
	if (pos == 0) {
		*head = ptr->next;
	} else if (pos > 0) {
		while (ptr != NULL && k < pos) {
			prev = ptr;
			ptr = ptr->next;
			k++;
		}
		prev->next = ptr->next;
	} else {
		printf("Invalid position. Enter a positive value for position\n");
	}
}

int get(struct ListNode* head,int pos) {
	struct ListNode* ptr = head;
	int k=0;
	while(ptr != NULL && k<pos) {
		ptr=ptr->next;
		k++;
	}
	return ptr->data;
}

struct ListNode* reverse(struct ListNode* head) {
	struct ListNode *curr,*next,*prev;
	prev = NULL;
	curr = head;

	while(curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
}

int hasLoop(struct ListNode* head) {
	struct ListNode *slowPtr,*fastPtr;
	slowPtr = head;
	fastPtr = head;
	while(slowPtr != NULL && fastPtr != NULL) {
		slowPtr = slowPtr->next;
		fastPtr = (fastPtr->next)->next;
		if(slowPtr == fastPtr) {
			return 1;
		}
	}
	return 0;
}

int getLoopStart(struct ListNode* head) {
	struct ListNode *slowPtr,*fastPtr;
	int hasLoop = 0;
//	First, find if list has a loop
	slowPtr = head;
	fastPtr = head;
	while(slowPtr != NULL && fastPtr != NULL) {
		slowPtr = slowPtr->next;
		fastPtr = (fastPtr->next)->next;
		if(slowPtr == fastPtr) {
			hasLoop = 1;
			break;
		}
	}
	if(hasLoop) {
		fastPtr = head;
		int pos = 0;
		while(slowPtr != fastPtr) {
			slowPtr = slowPtr->next;
			fastPtr = fastPtr->next;
			pos++;
		}
		return pos;
	}
	return -1;
}
