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
	ps->a[ps->size] = x;
	ps->size++;
}; // 尾插
void SeqListPopBack(SL* ps) {
	assert(ps->size > 0);
	ps->size--;
}; // 尾删
void SeqListPushFront(SL* ps, SLDataType x) {
}; // 头插
void SeqListPushFront(SL* ps) {
}; // 头删
void SeqListDeatory(SL* ps) {
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
}; // 销毁


void printInfo(SL* ps) {
	for (int i = 0; i < ps->size; i++)
	{
		cout << "a的值有：" << ps->a[i] << endl;
	}
}; // 打印