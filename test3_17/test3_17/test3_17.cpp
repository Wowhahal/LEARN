#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//猜数字游戏

void menu()
{
	printf("*********** 1.play  **********\n");
	printf("*********** 0.exit  **********\n");
}
void game()
{
	int b = rand() % 100;
	int c = 0;
	
	while (1)
	{
		printf("请输入你猜的数字：");
		scanf("%d", &c);
		if (c > b)
			printf("猜大了\n");
		else if (c < b)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}



int main()
{
	int a = 0;
	printf("######欢迎来到猜数字游戏######\n");
	do
	{
		int a = 0;
		menu();
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误！");
			break;
		}
	} while (a);
	
	return 0;
}


//模拟用户登录 只允许输入三次密码

//int main()
//{
//    char psw[10] = "";
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; ++i)
//    {
//        printf("please input:");
//        scanf("%s", psw);
//        if (strcmp(psw, "password") == 0)
//            break;
//    }
//    if (i == 3)
//        printf("exit\n");
//    else
//        printf("log in\n");
//}

//int main()
//{
//	int i = 0;
//	char psw[10] = "";
//	int j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("Please input:");
//		scanf("%s", psw);
//		if(strcmp(psw,"password")==0)
//		break;
//	}
//	if (i==4)
//		printf("你不是用户，滚！\n");
//		
//    else
//		printf("log in\n");
//
//	return 0;
//}


//int main()
//{
//	char psw[20] = { 0 };
//	char password[] = { "123456" };
//	int i = 0;
//	do
//	{	
//		if (i > 0)
//			printf("密码错误\n");
//		printf("请输入密码>");
//		scanf("%s", psw);
//		i++;
//	} while ((strcmp(psw, password) != 0)&&(i<=2));
//	if (i <= 2)
//		printf("密码正确，欢迎！\n");
//	else
//		printf("你不是用户，滚\n");
//	
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d×%d=%-2d ", i,j,k);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}