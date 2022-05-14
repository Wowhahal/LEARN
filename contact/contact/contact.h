#pragma once
#define _CRT_SECURE_NO_WARNINGS

// #define MAX 1000

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


#include <stdlib.h>


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//声明函数
//通讯录初始化
void InitContact(struct Contact* ps);
//添加信息
void AddContact(struct Contact* ps);
//信息展示
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找联系人
void SearchContact(const struct Contact* ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//排序算法
void SortContact(struct Contact* ps);
//释放开辟的动态内存
void DestoryContact(struct Contact* ps);