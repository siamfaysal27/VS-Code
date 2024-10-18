#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(num){
    int z,y;
    y=1;
    for(z=1; z<=num; z++){
        y = y*z;

    }
    return y;
}

int main()
{
    int n,k,x,i,j,l;


    printf("Enter the number of lines: ");
    scanf("%d", &n);



    for(i=0; i<n; i++){

        for(l=n; l>=i; l--){
            printf(" ");
        }
        for(k=0; k<=i; k++){

            int f1,f2,f3;
            for (f1=1; f1<=i; f1++)
            f1 *= f1;
            for (f2=1; f2<=k; f2++)
            f2 *= f2;
            for (f3=1; f3<=i-k; f3++)
            f3 *= f3;

            x = factorial(i)/(factorial(k)*factorial(i-k));
            printf("%d ", x);
        }
        printf("\n");
    }




    return 0;
}
