#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


void InitContact(struct Contact* ps)
{
	meset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֵֻ��0��Ԫ��
}