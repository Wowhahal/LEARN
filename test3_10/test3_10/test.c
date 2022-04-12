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
//	for (i = 1; i <= 10; i++)//初始化；判断部分；调整部分
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
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//缓冲区还有一个\n
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("取消确认\n");
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
//			continue;//中止本次循环 后边的代码不会执行
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
//		{//switch允许嵌套使用
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
//	switch (day)//day必须是整形表达式
//
//	{							//case和default没有顺序
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default://处理非法的状况
//		printf("输入错误");
//		break;

	//case 1://case后边必须是整形常量表达式
	//	printf("星期一");
	//	break;
	//case 2:
	//	printf("星期二");
	//	break;
	//case 3:
	//	printf("星期三");
	//	break;	
	//case 4:
	//	printf("星期四");
	//	break;
	//case 5:
	//	printf("星期五");
	//	break;
	//case 6:
	//	printf("星期六");
	//	break;
	//case 7:
	//	printf("星期七");
	//	break;
	//}
	//if (1 == day)
	//	printf("星期一");
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