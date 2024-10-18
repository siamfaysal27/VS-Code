#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, k, x, i, j, l;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (l = n; l >= i; l--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {

            int f1 = 1, f2 = 1, f3 = 1;

            for (int j = 1; j <= i; j++)
            {
                f1 = f1 * j;
            }
            for (int j = 1; j <= k; j++)
            {
                f2 = f2 * j;
            }
            for (int j = 1; j <= (i - k); j++)
            {
                f3 = f3 * j;
            }

            x = f1 / (f2 * f3);
            printf("%d ", x);
        }
        printf("\n");
    }

    return 0;
}
