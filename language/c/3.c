#include<stdio.h>
/*����*/
int main()
{
    /*��������*/
    int a = 212;
    int b = 212u; /*�޷������� u �޷��� L������*/ 
    int c = 0xff; /*ʮ������*/ 
    int d = 077;    /*�˽���*/ 
    printf("%d,%d,%d,%d\n",a,b,c,d);
    printf("%f,%f,%f,%f",3.14,314159E-5L,210,1e2);
    return 0;
    
}