#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����",20, 55.6 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s,sizeof(struct S),1,pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	//struct S s = { "����",20, 55.6 };
	struct S tmp = { 0 };
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %f", tmp.name, tmp.age, tmp.score);


	fclose(pf);
	pf = NULL;
	return 0;
}