#include<stdio.h>

//�ݹ�
double factorial(unsigned int i)
{
    if(i <= 1)
    {
        return 1;
    }
    
    return i * factorial(i-1);
}

int fibonaci(int i)
{
    if(i==0)
    {
        return 0;
    }
    
    if(i==1)
    {
        return 1;
    }
    
    return fibonaci(i-2) + fibonaci(i-1);
}

int main()
{
    
    int i = 3;
    printf("%d �Ľ׳�Ϊ��%f\n",i,factorial(i));
    
    for(i=0;i<10;i++)
    {
        printf("%d\t\n",fibonaci(i));
    }
    return 0;
}