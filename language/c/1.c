#include<stdio.h>
#include <limits.h>
#include<float.h>

int main()
{
    /*��һ��c����*/
	printf("Hello World!\n");
    int a = 10;
    
    printf("a ���ֽڳ���%d\n",sizeof(a));
    printf("int �洢��С: %lu \n",sizeof(int));
    
    printf("float �洢������ֽ�����%lu \n",sizeof(float));
    printf("float �����ֵ��%E\n",FLT_MAX);
    printf("float ����Сֵ��%E\n",FLT_MIN);
    printf("����ֵ: %d\n", FLT_DIG );

	return 0;
}


