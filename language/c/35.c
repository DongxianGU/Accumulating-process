#include<stdio.h>
//��Ҫ�������ͷ�ļ�
#include<stdarg.h>

double average(int num,...)
{
    va_list valist;
    
    double sum = 0.0;
    int i;
    
    va_start(valist,num);
    
    for(i=0;i<num;i++)
    {
        sum+=va_arg(valist,int);
    }
    
    va_end(valist);
    
    return sum/num;
}

//�ɱ����
int main()
{
    printf("%f\n",average(5,1,2,3,4,5));
}