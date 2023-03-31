#include <stdio.h>
int main()
{
    int num1, num2,sum;
    char a = '+';
    printf("enter your first number:");
    scanf("%d", &num1);
    printf("enter your second number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("%d %c %d =%d\n ", num1,a, num2, sum);
    
    return 0;
}
