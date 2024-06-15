#include <iostream>
#include <assert.h>
#include "SeqList.h"
using namespace std;

void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;

}; // ��ʼ��
void SeqListPushBack(SL* ps, SLDataType x) {
	// ���û�пռ���߿ռ䲻�㣬���Ǿ�����
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		// ���ԭ���Ŀռ��ǿգ���ôrealloc�����þ��൱��malloc
		// realloc���ص���һ��ָ�룬realloc()����һ��������Ҫ���ݵĶ��󣬵ڶ����������ֽ�����
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			// ����ʧ��
			cout << "��ʧ����" << endl;
			exit(-1);
		}
		ps->a = tmp; // ָ�븳ֵ
		ps->capacity = newCapacity; // ��ʾ����ʵ���ܴ����ݵĿռ������Ƕ�󣨸�����

	}
	ps->a[ps->size] = x;
	ps->size++;
}; // β��
void SeqListPopBack(SL* ps) {
	assert(ps->size > 0);
	ps->size--;
}; // βɾ
void SeqListPushFront(SL* ps, SLDataType x) {
}; // ͷ��
void SeqListPushFront(SL* ps) {
}; // ͷɾ
void SeqListDeatory(SL* ps) {
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
}; // ����


void printInfo(SL* ps) {
	for (int i = 0; i < ps->size; i++)
	{
		cout << "a��ֵ�У�" << ps->a[i] << endl;
	}
}; // ��ӡ