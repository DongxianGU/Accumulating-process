#include<stdio.h>

int max(int num1,int num2);
int main()
{
    int num1,num2;//�ֲ�����ϵͳ���������ʼ��,ȫ�ֱ���ϵͳ���Զ���ʼ��
    printf("������������:");
    scanf("%d,%d",&num1,&num2);
    printf("�ϴ����Ϊ��%d",max(num1,num2));
    return 0;
}

int max(int num1,int num2)
{
    int max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    return max;
}