#include<stdio.h>
/*static ��ʹ��*/
void func1(void);

static int count = 10;

int main()
{
    while(count--)
    {
        func1();
    }
    return 0;
}

void func1(void)
{
   /* 'thingy' �� 'func1' �ľֲ����� - ֻ��ʼ��һ��
    * ÿ�ε��ú��� 'func1' 'thingy' ֵ���ᱻ���á�
    */ 
    static int thingy = 5;
    thingy++;
    printf("thingy Ϊ %d, count Ϊ %d \n",thingy,count);
}