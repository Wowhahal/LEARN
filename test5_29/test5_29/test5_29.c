#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int a, b, c;
//    int count = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        a = i % 10;//��ȡ�����ĸ�λ����
//        b = (i / 10) % 10;//��ȡ������ʮλ����
//        c = (i / 100) % 10;//��ȡ�����İ�λ����
//        //�ж��Ƿ�Ϊˮ�ɻ�����
//        if (i == a * a * a + b * b * b + c * c * c)
//        {
//            count++;//����
//            printf("%d\n", i);
//        }
//    }
//    printf("count=%d", count);
//
//    return 0;
//}

int main()
{
    int num, n;
    int sum = 0;
    int temp = 0;
    printf("�������֣�\n");
    scanf("%d", &num);//1
    printf("�������ֵ�ǰ���\n");
    scanf("%d", &n);//3
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10 + num;
        printf("%d+", temp);
        sum = sum + temp;
    }
    printf("\n");
    printf("sum=%d", sum);

    return 0;
}