#include <stdio.h>
#include <math.h>


int main()
{
    int a = 4;
    int b = 7;
    int z;
    z = b * a;

    printf("the value of a/b is %d\n", a / b);
    printf("the value of a*b is %d\n", z);

    printf("5 when divided by 2 leaves %d as remainder\n", 5%2);
    printf("-5 when divided by 2 leaves %d as remainder\n", -5%2);
    printf("-5 when divided by -2 leaves %d as remainder\n", -5%2);
    printf("4 to power 5 is %f\n", pow(4,5));

    printf("the value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("the value of 5/2 is %d\n", 5/2);
    printf("the value of 5.0/2 is %f\n", 5.0/2);
    printf("the value of 2/5 is %d\n", 2/5);
    printf("the value of 2.0/5 is %f\n", 2.0/5);

    printf("the value of 3.0/9 is %f\n", 3.0/9);
    return 0;
}