#pragma once

#define N 100
typedef int SLDataType;

//// 静态顺序表
//typedef struct SeqList {
//	SLDataType a[N];
//	int size;// 表示数组中存了多少有效数据
//}SL;
//
//void SeqListInit(SL* ps); // 初始化
//void SeqListPushBack(SL* ps, SLDataType x); // 尾插
//void SeqListPopBack(SL* ps); // 尾删
//void SeqListPushFront(SL* ps, SLDataType x); // 头插
//void SeqListPushFront(SL* ps); // 头删


// 动态顺序表
typedef struct SeqList {
	SLDataType* a; // 指针
	int size;// 表示数组中存了多少个数据（个数）
	int capacity; // 表示数组实际能存数据的空间容量是多大（个数）
}SL;


// 顺序表的初始化，打印，销毁
void SeqListInit(SL* ps); // 初始化
void printInfo(SL* ps); // 打印
void SeqListDeatory(SL* ps); // 销毁


void SeqListPushBack(SL* ps, SLDataType x); // 尾插
void SeqListPopBack(SL* ps); // 尾删
void SeqListPushFront(SL* ps, SLDataType x); // 头插
void SeqListPushFront(SL* ps); // 头删









