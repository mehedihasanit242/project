#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter your first number:");
    scanf("%d", &num1);
    printf("enter your second number:");
    scanf("%d", &num2);
    printf("%d + %d =%d\n ", num1, num2, num1 + num2);
    printf("%d - %d =%d\n ", num1, num2, num1 - num2);
    printf("%d * %d =%d\n ", num1, num2, num1 * num2);
    printf("%d / %d =%d\n ", num1, num2, num1 / num2);
    printf("the end");
    return 0;
}
