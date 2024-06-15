#include <iostream>
#include "SeqList.h"
using namespace std;
int main() {
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
	SeqListDeatory(&sl); // 销毁
	return 0;

}