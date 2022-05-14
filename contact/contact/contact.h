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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��������
//ͨѶ¼��ʼ��
void InitContact(struct Contact* ps);
//�����Ϣ
void AddContact(struct Contact* ps);
//��Ϣչʾ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//�����㷨
void SortContact(struct Contact* ps);
//�ͷſ��ٵĶ�̬�ڴ�
void DestoryContact(struct Contact* ps);