/*
 * linkedlist.c
 *
 *  Created on: Nov 3, 2015
 *      Author: neeraj
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void insertAtStart(struct ListNode** head,int data)
{
	struct ListNode* newNode = createNode(data);
	newNode->next = *head;
	*head = newNode;
}

void insertAtEnd(struct ListNode **head,int data)
{
	struct ListNode* newNode = createNode(data);
	struct ListNode* ptr = *head;
	if(!*head) {
		printf("Empty node!!!\n\n");
		*head = newNode;
		return;
	}
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = newNode;
}

void insertAtPos(struct ListNode** head,int data,int pos) {
	if(pos==0) {
		insertAtStart(head,data);
	}
	else if(pos==-1) {
		insertAtEnd(head,data);
	}
	else if(pos>0) {
		int k=1;
		struct ListNode* ptr = *head;
		struct ListNode* newNode = createNode(data);
		while(ptr != NULL && k<pos) {
			ptr = ptr->next;
			k++;
		}
		newNode->next = ptr->next;
		ptr->next = newNode;
	}
	else {
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

int getLength(struct ListNode *head) {
	int len;
	len = 0;
	struct ListNode *ptr;
	ptr = head;
	while (ptr != NULL) {
		len++;
		ptr = ptr->next;
	}
	return len;
}

void traverseList(struct ListNode *head) {
	struct ListNode *ptr = head;
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

