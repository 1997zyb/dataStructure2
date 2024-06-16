#include <iostream>
#include "SeqList.h"
using namespace std;

void TestSeqList1() {
	SL sl; // 定义一个结构体
	SeqListInit(&sl); // 初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);

	printInfo(&sl); // 打印
}
void TestSeqList2() {
	SL sl; // 定义一个结构体
	SeqListInit(&sl); // 初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);

	SeqListPushFront(&sl);
	SeqListPushFront(&sl);
	printInfo(&sl); // 打印
}
int TestSeqList3() {
	SL sl; // 定义一个结构体
	SeqListInit(&sl); // 初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	return SeqListFind(&sl, 100);

}
int main() {
	//TestSeqList1();
	//TestSeqList2();
	int res = TestSeqList3();
	cout << "值是：" << res << endl;
	return 0;

}