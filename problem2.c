#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i, k, zero;
    long long int j, x;
    printf("Enter a number: ");
    scanf("%d", &num);

    j = 1;
    for (i = 1; i <= num; i++)
    {
        j = j * i;
    }
    printf("Answer: %d\n", j);

    for (k = 1; j >= pow(10, k); k++)
    {
        x = pow(10, k);
        if (j % x == 0)
        {
            zero = k;
        }
        else
        {
            break;
        }
    }
    printf("The number of trailing zero: %d", zero);

    return 0;
}