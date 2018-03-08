#include<stdio.h>
int main()
{
    double w1, p1, w2, p2, average;

    printf("weight of first items : ");
    scanf("%lf",&w1);

    printf("number of purchase : ");
    scanf("%lf",&p1);

    printf("weight of second items: ");
    scanf("%lf",&w2);

    printf("number of purchase : ");
    scanf("%lf",&p2);

    average = ((w1 * p1) + (w2 * p2)) / (p1 + p2);
    printf("Average Value = %f\n", average);

    return 0;
}
