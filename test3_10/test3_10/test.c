#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//��ʼ�����жϲ��֣���������
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}




//int main()
//{
//	int ret = 0;
//	int ch;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//����������һ��\n
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȡ��ȷ��\n");
//	}
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF);
//	{putchar(ch); }
//	return 0;
//}

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar())!= EOF);//ctrl+z   EOF-end of file
//	//{
//	//	putchar(ch);
//	//	printf("%c\n", ch);
//	//}
//	int ch = getchar();
//	putchar(ch);
//	printf("\n%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��ֹ����ѭ�� ��ߵĴ��벻��ִ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++, n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m= %d,n= %d\n", m, n);
//	return 0;
//}







//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day���������α��ʽ
//
//	{							//case��defaultû��˳��
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default://����Ƿ���״��
//		printf("�������");
//		break;

	//case 1://case��߱��������γ������ʽ
	//	printf("����һ");
	//	break;
	//case 2:
	//	printf("���ڶ�");
	//	break;
	//case 3:
	//	printf("������");
	//	break;	
	//case 4:
	//	printf("������");
	//	break;
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//	printf("������");
	//	break;
	//case 7:
	//	printf("������");
	//	break;
	//}
	//if (1 == day)
	//	printf("����һ");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int b = 0;
//	while (i <= 100)
//	{
//		if (i%2==1)
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}