#include <stdio.h>
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
    for (i = 4; i < n; i++)
    {
        for(j = 2; j <= i/2; j++)
        {
            if ((i%j) == 0)
                break;
        }
        if (j > i/2)
            printf("%d ", i);
    }
}