#include<stdio.h>

//ָ��
/*
ָ����һ����������ֵΪ��һ�������ĵ�ַ�������ڴ�λ�õ�ֱ�ӵ�ַ������������������һ������������ʹ��ָ��洢����������ַ֮ǰ���������������ָ�����������һ����ʽΪ��type *var-name;
 */
int main()
{
   int var1;
   int var2[10];
   
   printf("var1 �ĵ�ַ��%p\n",&var1);
   printf("var2 �ĵ�ַ��%p\n",&var2);
   
   int var=20;
   int *ip;
   ip = &var;
   
   printf("Address of var :%p\n",&var);
   printf("Address of ip :%p\n",ip);
   printf("Value of *ip :%d\n",*ip);
   
   //�ڱ���������ʱ�����û��ȷ�еĵ�ַ���Ը�ֵ��Ϊָ�������һ�� NULL //ֵ��һ�����õı��ϰ�ߡ���Ϊ NULL ֵ��ָ�뱻��Ϊ��ָ�롣
   int *p = NULL;
   printf("ptr ��ֵ��%p\n",p);
   
   return 0;
}