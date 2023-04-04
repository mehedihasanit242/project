#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter your 1st number:");
    scanf("%d", &num1);
    printf("enter your 2nd number:");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("number1 number2 is equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}
