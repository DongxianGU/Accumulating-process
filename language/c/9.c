#include<stdio.h>
/*�����*/

int main()
{
    /*���������*/
    int a = 21;
    int b = 10;
    int c;
    
    c = a + b;
    printf("Line1 - c : %d\n",c);
    c = a - b;
    printf("Line2 - c : %d\n",c);
    c = a * b;
    printf("Line3 - c : %d\n",c);
    c = a / b;
    printf("Line4 - c : %d\n",c);
    c = a % b;
    printf("Line5 - c : %d\n",c);
    c = a++; //��ֵ���ټ� 1 ��c Ϊ 21��a Ϊ 2
    printf("Line6 - c : %d\n",c);
    c = a--;
    printf("Line7 - c : %d\n",c);
    
    /*ǰ�� ++/-- �� ���� ++/-- */
    int d = 10;
    int e;
    e = d++;
    printf("Line1 - d and e: %d\t%d\n",d,e);
    d = 10;
    e = d--;
    printf("Line2 - d and e: %d\t%d\n",d,e);
    d = 10;
    e = ++d;
    printf("Line3 - d and e: %d\t%d\n",d,e);
    d = 10;
    e = --d;
    printf("Line4 - d and e: %d\t%d\n",d,e);
    
    //��ϵ�����
    if (a == b)
    {
        printf("Line1 - a ���� b\n");
    }
    else
    {
        printf("Line1 - a ������ b\n"); 
    }
    
    if (a < b)
    {
        printf("Line2 - a С�� b\n");
    }
    else
    {
        printf("Line2 - a ��С�� b\n"); 
    }
    
    if ( a > b )
    {
      printf("Line 3 - a ���� b\n" );
    }
    else
    {
      printf("Line 3 - a ������ b\n" );
    }
    
    //�߼������
    if (a && b)
    {
        printf("Line1 - ����Ϊ��\n");
    }
    if (a || b)
    {
        printf("Line2 - ����Ϊ��\n");
    }
    a = 0;
    b = 10;
    if (a && b)
    {
        printf("Line3 - ����Ϊ��\n");
    }
    else
    {
        printf("Line3 - ������Ϊ��\n");
    }
    
    if(!(a && b))
    {
        printf("Line4 - ����Ϊ��\n");
    }
    
    //λ�����
    unsigned int _a = 60;
    unsigned int _b = 13;
    int _c = 0;
    _c = _a & _b;
    printf("Line1 - _c : %d\n",_c);
    _c = _a | _b;
    printf("Line2 - _c : %d\n",_c);
    _c = _a ^ _b;
    printf("Line3 - _c : %d\n",_c);
    _c = ~_a;
    printf("Line4 - _c : %d\n",_c);
    _c = _a << 2;
    printf("Line5 - _c : %d\n",_c);
    _c = _a >> 2;
    printf("Line6 - _c : %d\n",_c);

    //��ֵ�����
       c =  a;
   printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c );
 
   c +=  a;
   printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c );
 
   c -=  a;
   printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c );
 
   c *=  a;
   printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c );
 
   c /=  a;
   printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 - %= �����ʵ����c ��ֵ = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c );
 
   c &=  2;
   printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c );
 
   c |=  2;
   printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c );
}