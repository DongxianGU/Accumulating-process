#include<stdio.h>
#include<time.h>
#define TIME 1000000000
int m,n = TIME ;/*ȫ�ֱ���*/
/*
*�洢�ඨ�� C �����б���/�����ķ�Χ���ɼ��ԣ�����������
* auto auto �洢�������оֲ�����Ĭ�ϵĴ洢�ࡣ ֻ�����ں�����
* register  ���ڶ���洢�ڼĴ����ж����� RAM �еľֲ�����
* static
static �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ��ڣ�������Ҫ��ÿ����������뿪������ʱ���д��������١���ˣ�ʹ�� static ���ξֲ����������ں�������֮�䱣�־ֲ�������ֵ��

static ���η�Ҳ����Ӧ����ȫ�ֱ������� static ����ȫ�ֱ���ʱ����ʹ���������������������������ļ��ڡ�

static ��ȫ�ֱ�����Ĭ�ϴ洢�࣬������������ (count �� road) ����һ�� static �洢�ࡣ
* extern
*/
/*
auto �Ǿֲ�������Ĭ�ϴ洢��, �޶�����ֻ���ں����ڲ�ʹ�ã�

register �����˼Ĵ��������������ڴ���ʹ�ã�

static��ȫ�ֱ�����Ĭ�ϴ洢��,��ʾ�����ڳ������������ڿɼ���

extern ��ʾȫ�ֱ��������Գ����������ļ��ɼ���������Java�е�public�ؼ��֣�
 */
int main()
{
    auto int month;
    time_t start,stop;
    register int a,b=TIME; /*�Ĵ�������*/
    int x,y = TIME;    /*�ֲ�����*/
    
    time(&start);
    for(a=0;a<b;a++);
    time(&stop);
    printf("�Ĵ���������ʱ��%ld \n",stop - start);
    
    time(&start);
    for(x=0;x<y;x++);
    time(&stop);
    printf("�ֲ�������ʱ��%ld \n",stop - start);
    
    time(&start);
    for(m=0;m<n;m++);
    time(&stop);
    printf("ȫ�ֱ�����ʱ��%ld \n",stop - start);
    
    return 0;
}