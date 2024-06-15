#pragma once

#define N 100
typedef int SLDataType;

//// ��̬˳���
//typedef struct SeqList {
//	SLDataType a[N];
//	int size;// ��ʾ�����д��˶�����Ч����
//}SL;
//
//void SeqListInit(SL* ps); // ��ʼ��
//void SeqListPushBack(SL* ps, SLDataType x); // β��
//void SeqListPopBack(SL* ps); // βɾ
//void SeqListPushFront(SL* ps, SLDataType x); // ͷ��
//void SeqListPushFront(SL* ps); // ͷɾ


// ��̬˳���
typedef struct SeqList {
	SLDataType* a; // ָ��
	int size;// ��ʾ�����д��˶��ٸ����ݣ�������
	int capacity; // ��ʾ����ʵ���ܴ����ݵĿռ������Ƕ�󣨸�����
}SL;


// ˳���ĳ�ʼ������ӡ������
void SeqListInit(SL* ps); // ��ʼ��
void printInfo(SL* ps); // ��ӡ
void SeqListDeatory(SL* ps); // ����


void SeqListPushBack(SL* ps, SLDataType x); // β��
void SeqListPopBack(SL* ps); // βɾ
void SeqListPushFront(SL* ps, SLDataType x); // ͷ��
void SeqListPushFront(SL* ps); // ͷɾ









