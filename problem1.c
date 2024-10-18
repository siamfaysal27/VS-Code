#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double i, n, j, k, fact;
    double x, sine;
    printf("Enter an angle(rad): ");
    scanf("%lf", &x);

    sine = 0;
    for (i = 1, n = 1, k = 1; i <= 31 && n <= 15; i = i + 2, n++, k = k + 2)
    {
        fact = 1;
        for (j = 1; j <= k; j++)
        {
            fact = fact * j;
        }
        sine += pow(-1, n + 1) * (pow(x, i) / fact);
    }
    printf("Answer: %lf", sine);

    return 0;
}