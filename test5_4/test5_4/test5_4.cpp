#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	//192.168.31.121
//	//192  168  31  121 - strtok
//	char arr[] = "zpw@bitedu.tech";
//	const char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s", ret);
//	return 0;
//}

int main()
{
	//2-    No such file or directory
	//errno是一个全局的错误码的变量
	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
	/*char* str = strerror(errno);
	printf("%s\n", str);*/
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}


	return 0;
}