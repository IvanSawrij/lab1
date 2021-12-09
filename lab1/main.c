#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Shapka()
{
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
    printf("\t* N * X * F(X) *\t\n");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
}

int main()
{
    double x1, x2, delta, x3;
    unsigned int i = 1, N;
    unsigned char C;
    printf("Choose your variant: \n");
    scanf("%c", &C);
    if (C == '1')
    {

        printf("\nFirst value : ");
        scanf("%lf", &x1);

        printf("\nSecond value : ");
        scanf("%lf", &x2);

        printf("\nCount of steps : ");
        scanf("%d", &N);

        printf("Start: %.2lf\nFinish: %.2lf\nCount of steps: %d\n", x1, x2, N);
        Shapka();

        for (; i <= N; i++)
        {
            x3 = 5 * x1;
            printf("\t| %d| %.2lf| %.2lf|\t\n", i, x1, x3);
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
            x1++;
        }
    }
    else if (C == '2')
    {

        printf("\nFirst value : ");
        scanf("%lf", &x1);

        printf("\nSecond value : ");
        scanf("%lf", &x2);

        printf("\nStep : ");
        scanf("%lf", &delta);

        printf("Start: %.2lf\nFinish: %.2lf\nStep: %.2lf\n", x1, x2, delta);
        Shapka();

        for (i; i <= x2; i++)
        {
            x3 = 5 * x1;
            printf("\t| %d| %.2lf| %.2lf|\t\n", i, x1, x3);
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
            x1 = x1 + delta;
        }
    }
    return 0;
}
