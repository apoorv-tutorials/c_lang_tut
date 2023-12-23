#include <stdio.h>

int main()
{
    //     int a,b;
    //     printf("Enter the value of a: \n");
    //     scanf("%d", &a);
    //     printf("Enter the value of b: \n");
    //     scanf("%d", &b);
    //     if (a % 2 == 0){
    //         printf("%d is even\n", a);
    //     }else{
    //         printf("%d is odd\n", a);
    //     }
    //    return 0;

    //     int c;
    //    printf("let's see a switch sattement\n");
    //    scanf("%d", &c);
    //    switch (c)
    //    {
    //    case 1:
    //     printf("the value is 1\n");
    //     break;
    //    case 2:
    //     printf("the value is 2\n");
    //     break;
    //    default:
    //    printf("nothing matched\n");
    //     break;
    //    }
    //    return 0;

    // ternanry
    //    int a;
    //    printf("enter the value of a\n");
    //    scanf("%d", &a);
    //    (a<5)? printf("A is less than 5\n") : printf("A is greater than 5\n");
    //     return 0;

    int a, b, c, d, max = 0;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    printf("Enter the value of d: \n");
    scanf("%d", &d);
    if (a > b)
    {
        max = a;
        printf("first block %d\n", max);
    }
    else
    {
        max = b;
        printf("second block %d\n", max);
    }
    if (c > max)
    {
        max = c;
        printf("third block %d\n", max);
    }
    if (d > max)
    {
        max = d;
        printf("fourth block %d\n", max);
    }

    printf("the max value is %d\n", max);
    return 0;
}
