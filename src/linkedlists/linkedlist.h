/*
 * linkedlist.h
 *
 *  Created on: Nov 4, 2015
 *      Author: neeraj
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct ListNode{
	struct ListNode* next;
	int data;
};

typedef struct ListNode* pListNode;

struct ListNode* createNode(int);
int getLength(struct ListNode* );
void traverseList(struct ListNode* );
void insertAtStart(struct ListNode**, int);
void insertAtEnd(struct ListNode**,int);
void insertAtPos(struct ListNode**,int,int);
void delete(struct ListNode**,int);
int search(struct ListNode*,int);
int get(struct ListNode*,int);
struct ListNode* reverse(struct ListNode*);
int hasLoop(struct ListNode*);
int getLoopStart(struct ListNode*);

#endif /* LINKEDLIST_H_ */
