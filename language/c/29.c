#include<stdio.h>

#undef FILE_SIZE  //ȡ���Ѿ�����
#define FILE_SIZE 42 //����

#ifndef MESSAGE
 #define MESSAGE "You Wish!"
#endif

#ifdef DEBUG

#endif

int main()
{
    //ʹ��Ԥ�����
    printf("FILE :%s\n",__FILE__);
    printf("DATE :%s\n",__DATE__);
    printf("TIME :%s\n",__TIME__);
    printf("LINE :%d\n",__LINE__);
    printf("ANSI :%d\n",__STDC__);
    
    return 0;
}