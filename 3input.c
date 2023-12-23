# include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("the sum is %d", a+b);
    /*
    %d is called format specifier
    &a is called address of the operator
    */
    return 0;
}
