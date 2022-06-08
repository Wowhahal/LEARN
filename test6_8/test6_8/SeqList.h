#pragma once
#include <stdio.h>

//#define N 100
typedef int SLDataType;
//顺序表就是数组，但是在数组的基础上他还要求数据是从头开始存储的，不能跳跃间隔

//静态顺序表
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示数组中存储了多少个数据
//}SL;


//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示数组中存储了多少个数据
	int capacity;//表示实际能存数据的空间容量是多大
}SL;

//静态特点：如果满了不让插入 
//接口函数
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
