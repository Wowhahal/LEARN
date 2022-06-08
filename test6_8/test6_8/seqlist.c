#include "SeqList.h"


void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity ==0 ? 4 : ps->capacity*2 ;

	}
	ps->a[ps->size] = x;
	ps->size++;

}