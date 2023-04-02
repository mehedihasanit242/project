#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("your number %d is negetive", n);
    }
    else if (n>0)
    {
        printf("your number %d is positive", n);

    }
    else {
        printf("your number is 0");
    }
    return 0;
}