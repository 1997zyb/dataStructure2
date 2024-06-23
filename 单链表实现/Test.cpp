#include <iostream>
using namespace std;
#include "SList.h"

void TestSList1() {
	// 声明一个名为plist的指针变量，该指针指向SLTnode，同时将该指针初始化为NULL，
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
}
void TestSList2() {
	// 声明一个名为plist的指针变量，该指针指向SLTnode，同时将该指针初始化为NULL，
	SLTNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

int main() {
	//TestSList1();
	TestSList2();
	return 0;
}