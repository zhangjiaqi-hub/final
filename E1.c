#include<stdio.h>
int caculate(int a,int b);
int main()
{
   int m_a;
   int m_b;
    int result;
    printf("a\n");
    scanf("%d",&m_a);
    printf("b\n");
    scanf("%d",&m_b);
    result=caculate(m_a,m_b);
    printf("%d\n",result);
    return 0;
}

 int caculate(int a,int b)
{
    int result=(a+b)*(a+b);
    return result;
}
