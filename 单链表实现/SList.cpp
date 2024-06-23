#include <iostream>
#include "SList.h"
using namespace std;

void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur != NULL) {
		cout << cur->data << endl;
		cur = cur->next;
	}
}

void SListPushBack(SLTNode** pphead, SLTDateType x) {
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	newNode->data = x;
	newNode->next = NULL;

	if (*pphead == NULL) {
		*pphead = newNode;
	}
	else {
		// ÕÒµ½Î²½Úµã
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newNode;
	}
}