#include<stdio.h>
//��������� ? sizeof & ��Ԫ

int main()
{
    int a = 4;
    short b;
    double c;
    int* ptr;
    
    printf("Line1 - a �Ĵ�С = %lu\n",sizeof(a));
    printf("Line1 - b �Ĵ�С = %lu\n",sizeof(b));
    printf("Line1 - c �Ĵ�С = %lu\n",sizeof(c));
    
    ptr = &a;
    printf("a and *ptr : %d and %d \n",a,*ptr);
    
    b = (a == 1) ? 20 : 10;
    printf(" b : %d",b);
    
    return 0;
}