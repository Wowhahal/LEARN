#pragma once
#include <stdio.h>

//#define N 100
typedef int SLDataType;
//˳���������飬����������Ļ���������Ҫ�������Ǵ�ͷ��ʼ�洢�ģ�������Ծ���

//��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}SL;


//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ�����д洢�˶��ٸ�����
	int capacity;//��ʾʵ���ܴ����ݵĿռ������Ƕ��
}SL;

//��̬�ص㣺������˲��ò��� 
//�ӿں���
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
