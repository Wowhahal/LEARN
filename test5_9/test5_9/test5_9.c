#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contact.h"


//union Un
//{
//	int a;
//	char arr[5];
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

void menu()
{
	printf("****************************************");
	printf("********1.add          2.del************");
	printf("********3.search       4.modify*********");
	printf("********5.show         6.sort***********");
	printf("********0.exit**************************");
	printf("****************************************");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct PeoInfo con;//con����ͨѶ¼����߰�����1000Ԫ������size
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//AddContact(con, &size);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			break;
		}
	} while (1);
	return 0;
}