#include <stdio.h>
int main()
{
    int n ;
    printf("enter your number:");
    scanf("%d", &n);
    if (n%2 == 0)
    {
        printf("Your number is odd");

    }
    else {
        printf("your number is even");

    }
    return 0;
}
