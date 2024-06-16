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
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}; // β��
void SeqListPopBack(SL* ps) {
	assert(ps->size > 0);
	ps->size--;
}; // βɾ
void SeqListPushFront(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	// Ų������
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;

}; // ͷ��
void SeqListPushFront(SL* ps) {
	assert(ps->size > 0);
	// Ų������
	int begin = 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}; // ͷɾ
void SeqListDeatory(SL* ps) {
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
}; // ����

int SeqListFind(SL* ps, SLDataType x) {
	for (int i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i]) {
			return i;
		}
		/*else if (i == ps->size - 1 && x != ps->a[ps->size - 1]) {
			return -1;
		}*/
	}
	return -1;
}; // ����
void SeqListInsert(SL* ps, int pos, SLDataType x) {
	assert(pos <= ps->size && pos >= 0);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	// Ų������
	while (end >= pos) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}; // ָ���±����
void SeqListErase(SL* ps, int pos) {
	assert(pos < ps->size && pos >= 0);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}; // ָ��λ��ɾ��
void SeqListCheckCapacity(SL* ps) {
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
};
void printInfo(SL* ps) {
	for (int i = 0; i < ps->size; i++)
	{
		cout << "a��ֵ�У�" << ps->a[i] << endl;
	}
}; // ��ӡ