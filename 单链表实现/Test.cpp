#include <iostream>
using namespace std;
#include "SList.h"

void TestSList1() {
	// ����һ����Ϊplist��ָ���������ָ��ָ��SLTnode��ͬʱ����ָ���ʼ��ΪNULL��
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
}
void TestSList2() {
	// ����һ����Ϊplist��ָ���������ָ��ָ��SLTnode��ͬʱ����ָ���ʼ��ΪNULL��
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