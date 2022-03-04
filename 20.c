#include <stdio.h>
void pattern1(int n)
{
    int x, y;
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }
        for (y = n; y >= 1; y--)
        {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    int x, y, k;
    for (x = 1; x <= n; x++)
    {
        for (y = x; y < n; y++)
        {
            printf(" ");
        }
        for (k = 1; k < (x * 2); k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (x = 4; x >= 1; x--)
    {
        for (y = n; y > x; y--)
        {
            printf(" ");
        }
        for (k = 1; k < (x * 2); k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}

void pattern3(int n)
{
    int x, y;
    for (int x = 1; x < n; x++)
    {
        for (int y = 1; y <= x; y++)
            printf("%d", y);
        printf("\n");
    }
    for (int x = n; x >= 0; x--)
    {
        for (int y = 1; y <= x; y++)
            printf("%d", y);
        printf("\n");
    }
}

int main()
{
    int n, selectors;
    printf("Enter A Number of Pattern: ");
    scanf("%d", &selectors);

    printf("Enter A Number: ");
    scanf("%d", &n);

    if (selectors == 1)
    {
        pattern1(n);
    }
    else if (selectors == 2)
    {
        pattern2(n);
    }
    else if (selectors == 3)
    {
        pattern3(n);
    }

    return 0;
}