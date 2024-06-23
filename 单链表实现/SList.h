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

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDateType x);
