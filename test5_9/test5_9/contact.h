#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tetle[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数
};

//声明函数

InitContact(struct Contact* ps);