#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList()
{
	SL sl;
	SeqListInit(&sl);// 函数传参，形参是实参的拷贝，形参的改变不会影响实参
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
}

int main()
{

	return 0;
}