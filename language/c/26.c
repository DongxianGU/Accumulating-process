#include<stdio.h>  //�����ļ�  printf����

/*
stdin   ��׼����
stdout  ��׼���
stderr  ��׼����

*/

int main()
{
    float f;
    /*
    printf("������һ����������");
    scanf("%f",&f);
    printf("Value of f is %f\n",f);
    */
    
    /*int c;
    printf("����һ���ַ���");
    c = getchar();
    printf("\n�������Ϊ��");
    putchar(c);
    */
    
    /*char str[200];
    printf("����һ���ַ�����");
    gets(str);
    printf("\n�������Ϊ��");
    puts(str);
    */
    
    char str[100];
   int i;
 
   printf( "Enter a value :");
   scanf("%s %d", str, &i);
 
   printf( "\nYou entered: %s %d ", str, i);
   printf("\n");
    
    return 0;
}