#include<stdio.h>
#include<string.h>


int main()
{
    char s1[12] = "Hello";
    char s2[12] = "World";
    char s3[12];
    int len;
    //����s1��s3
    strcpy(s3,s1);
    printf("strcpy(s3,s1) s3:%s\n",s3);
    
    //����s1��s2
    strcat(s1,s2);
    printf("strcat(s1,s2) s1:%s\n",s1);
    
    //s1 �ĳ���
    len = strlen(s1);
    printf("strlen(s1) len:%d\n",len);

    //strcmp(s1, s2);
    //��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�С�� 0����� //s1>s2 �򷵻ش��� 0��
    int dis = strcmp(s1,s2);
    printf("dis : %d\n",dis);
    
    return 0;
}