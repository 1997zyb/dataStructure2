#pragma once
#include <iostream>
using namespace std;
#include <stdlib.h>

typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SLTNode;
// typedef Ϊ struct SListNode ������һ���µ����� SLTNode
void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDateType x);
void SListPushFront(SLTNode** pphead, SLTDateType x);
void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);
