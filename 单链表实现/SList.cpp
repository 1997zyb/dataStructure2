#include <iostream>
#include "SList.h"
#include <assert.h>
using namespace std;

// 创建一个空间
SLTNode* BuyListNode(SLTDateType x) {
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL) {
		cout << "空间不足！！" << endl;
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur != NULL) {
		cout << cur->data << endl;
		cur = cur->next;
	}
}

void SListPushBack(SLTNode** pphead, SLTDateType x) {
	SLTNode* newNode = BuyListNode(x);

	if (*pphead == NULL) {
		*pphead = newNode;
	}
	else {
		// 找到尾节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListPushFront(SLTNode** pphead, SLTDateType x) {
	SLTNode* newNode = BuyListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}
void SListPopBack(SLTNode** pphead) {
	/*if (*pphead == NULL) {
		return;
	}*/

	assert((*pphead)->next != NULL);

	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		// 找到尾节点
		SLTNode* prev = NULL; // 定义一个指针存储上一个
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
};
void SListPopFront(SLTNode** pphead) {};