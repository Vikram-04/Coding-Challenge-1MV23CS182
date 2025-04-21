#include <stdio.h>
void  fibo(int n);
int main()
{
    int n;
    printf("Enter length of fibonacci series: ");
    scanf("%d", &n);
    fibo(n);
}
void fibo(int n)
{
    int t1=0, t2=1;
    if (n < 1)
    {
        printf("Input integer greater than 0\n");
        return;
    }
    if (n == 1)
    {
        printf("%d\n",t1);
        return;
    }
    if (n == 2)
    {
        printf("%d %d\n",t1, t2);
        return;
    }
    printf("%d %d ",t1, t2);
    for (int i = 0; i < n-2; i++)
    {
        int num = t1+t2;
        printf("%d ", num);
        t1 = t2;
        t2 = num;
    }
    printf("\n");
}
