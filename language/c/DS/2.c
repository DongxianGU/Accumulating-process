#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
typedef int ElemType;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 1

typedef int Status;

/* ���Ա� ˳��ṹ */
typedef struct
{
    ElemType data[MAX_SIZE];
    int length;
} SqList;


//����Ҫ�޸�ԭ���� ֱ�Ӵ���
Status GetElem(SqList L,int i,ElemType *e)
{
    if(L.length == 0 || i<1 || i > L.length)
    {
        return ERROR;
    }
    
    *e = L.data[i-1];
    return OK;
}

/* ���� ��Ҫ�޸� ��������ָ��*/
Status ListInsert(SqList *L,int i,ElemType e)
{
    
    int k;
    // ���ȴﵽ��� ���ܲ���
    if(L->length == MAX_SIZE)
    {
        fprintf(stderr,"���ȳ������\n");
        return ERROR;
    }
    
    //�����λ��С��1���ߴ��ڵ�ǰ���ȼ�1
    if(i < 1 || i > L->length+1)
    {
        fprintf(stderr,"�����λ��С��1���ߴ��ڳ���\n");
        return ERROR;
    }
    
    if(i <= L->length)
    {
        for(k = L->length-1;k>=i-1;k--)
        {   
            //�Ӻ���ǰ������Ҫ�����λ�� ��ֵ�����ƶ�һλ
            L->data[k+1] = L->data[k];
        }
    }
    
    L->data[i-1] = e;
    L->length++;
    return OK;
}

Status ListDelet(SqList *L,int i,ElemType *e)
{
    if(L->length == 0)
    {
        return ERROR;
    }
    
    if(i < 1 || i > L->length)
    {
        return 0;
    }
    
    *e = L->data[i-1];
    int k;
    if(i<L->length)
    {
        for(k=i;i<L->length;k++)
        {
            L->data[k-1] = L->data[k];
        }
    }
    L->length--;
    return OK;
}

int main()
{
    SqList L;
    L.length = 0;
    int status = ListInsert(&L,1,1);
}

