#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList()
{
	SL sl;
	SeqListInit(&sl);// �������Σ��β���ʵ�εĿ������βεĸı䲻��Ӱ��ʵ��
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