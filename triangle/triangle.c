#include <stdio.h>

int main()
{
    // Input number of rows
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    // Print centre aligned triangle
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }
        stars += 2;
        printf("\n");

    }
    return 0;
}