#include <iostream>
#include "SeqList.h"
using namespace std;
int main() {
	SL sl; // ����һ���ṹ��
	SeqListInit(&sl); // ��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);

	printInfo(&sl); // ��ӡ
	SeqListDeatory(&sl); // ����
	return 0;

}