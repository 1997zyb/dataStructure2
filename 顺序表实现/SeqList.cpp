#include <iostream>
#include <assert.h>
#include "SeqList.h"
using namespace std;

void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;

}; // 初始化
void SeqListPushBack(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}; // 尾插
void SeqListPopBack(SL* ps) {
	assert(ps->size > 0);
	ps->size--;
}; // 尾删
void SeqListPushFront(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	// 挪动数据
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;

}; // 头插
void SeqListPushFront(SL* ps) {
	assert(ps->size > 0);
	// 挪动数据
	int begin = 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}; // 头删
void SeqListDeatory(SL* ps) {
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
}; // 销毁

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
}; // 查找
void SeqListInsert(SL* ps, int pos, SLDataType x) {
	assert(pos <= ps->size && pos >= 0);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	// 挪动数据
	while (end >= pos) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}; // 指定下标插入
void SeqListErase(SL* ps, int pos) {
	assert(pos < ps->size && pos >= 0);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}; // 指定位置删除
void SeqListCheckCapacity(SL* ps) {
	// 如果没有空间或者空间不足，我们就扩容
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		// 如果原来的空间是空，那么realloc的作用就相当于malloc
		// realloc返回的是一个指针，realloc()，第一个参数是要扩容的对象，第二个参数是字节数，
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			// 扩容失败
			cout << "我失败了" << endl;
			exit(-1);
		}
		ps->a = tmp; // 指针赋值
		ps->capacity = newCapacity; // 表示数组实际能存数据的空间容量是多大（个数）

	}
};
void printInfo(SL* ps) {
	for (int i = 0; i < ps->size; i++)
	{
		cout << "a的值有：" << ps->a[i] << endl;
	}
}; // 打印