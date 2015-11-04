/*
 * linkedlist.h
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct ListNode {
	struct ListNode *next;
	int data;
};

struct ListNode* createNode(int);
int getLength(struct ListNode *);
void traverseList(struct ListNode *);
void insertAtStart(struct ListNode**, int);
void insertAtEnd(struct ListNode**,int);
void insertAtPos(struct ListNode**,int,int);

#endif /* LINKEDLIST_H_ */
