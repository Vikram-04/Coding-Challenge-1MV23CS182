#include <stdio.h>
#include <stdbool.h>
void main()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    if (n <= 2)
    {
        printf("There is no prime number less than %d\n", n);
        return;
    }
    if (n == 3)
    {
        printf("2\n");
        return;
    }
    if (n == 4)
    {
        printf("2 3\n");
        return;
    }
    printf("2 3 ");
    int i,j;
    bool isPrime;
    for (i = 4; i < n; i++)
    {
        isPrime = true;
        for(j = 2; j <= i/2; j++)
        {
            if ((i%j) == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
}