#include<stdio.h>
//ָ������

#define MAX 5

int main()
{
    int var[MAX] = {1,2,3,4,5};
    int i ;
    
    int *ptr = var;
    
    for(i=0;i<MAX;i++)
    {
        printf("�洢��ַvar[%d] = %x\n",i,ptr);
        printf("�洢ֵ  var[%d] = %d\n\n",i,*ptr);
        
        ptr++; //��Ϊptr������ָ�룬ÿ��++ ���ƶ�4���ֽڣ�������ַ�ָ�룬
        //++ �ƶ�һ���ֽ�
    }
    
    
    ptr = &var[MAX - 1];
    
    for(i = MAX - 1;i>=0;i--)
    {
        printf("�洢��ַvar[%d] = %x\n",i,ptr);
        printf("�洢ֵ  var[%d] = %d\n\n",i,*ptr);
        ptr--;
    }
    
    //ָ��ıȽ� ���ָ��ָ�������໥�����ı��� ��ͬһ�������Ԫ��
    
    ptr = var;
    
    do{
        printf("�洢��ַ%x\n",ptr);
        printf("�洢ֵ  %d\n\n",*ptr);
        ptr++;
    }while(ptr <= &var[MAX-1]);
    
    return 0;
}