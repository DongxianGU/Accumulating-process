#include<stdio.h>
#include<string.h>
#include<errno.h>
//c ������
int main()
{
    FILE *fp = NULL;
    int errnum;
    fp = fopen("unexits.txt","rb");
    
    if(fp == NULL)
    {
        /*
        errno��perror() �� strerror()
        C �����ṩ�� perror() �� strerror() ��������ʾ�� errno ��ص��ı���Ϣ��perror()������ʾ�����������ַ��������һ��ð�š�һ���ո�͵�ǰ errno ֵ���ı���ʾ��ʽ��
        strerror() ����������һ��ָ�룬ָ��ָ��ǰ errno ֵ���ı���ʾ��ʽ��*/
        errnum = errno;
        fprintf(stderr,"����ţ�%d\n",errno);
        perror("ͨ��perror�������");
        fprintf(stderr,"���ļ�����%s\n",strerror(errnum));
    }
    else
    {
        fclose(fp);
    }
    
    return 0;
}