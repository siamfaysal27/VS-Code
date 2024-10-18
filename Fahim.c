#include <stdio.h>

void printbinary(int n)
{
    if (n == 0)
        return;
    int remainder = n % 2;
    printbinary(n / 2);
    printf("%d", remainder);
}

int main()
{
    printbinary(10);
    printf("\n");

    int n = 10;
    int max = 0;
    int temp = n;
    while (temp)
    {
        temp = temp / 2;
        max++;
    }
    for (int i = max; i >= 1; i--)
    {
        temp = n;
        int remainder;
        for (int j = 1; j <= i; j++)
        {
            remainder = temp % 2;
            temp = temp / 2;
        }
        printf("%d", remainder);
    }
    printf("\n");

    return 0;
}