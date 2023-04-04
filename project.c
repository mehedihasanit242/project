#include <stdio.h>

int main()
{
    char input;
    printf("Input the grade: ");
    scanf(" %c", &input); // add a space before %c to consume any whitespace or newline left in the buffer

    if (input == 'E') 
    {
        printf("You have chosen: Excellent\n"); 
    }
    else if (input == 'V')
    {
        printf("You have chosen: Very Good\n");
    }
    else if (input == 'G')
    {
        printf("You have chosen: Good\n");
    }
    else if (input == 'A')
    {
        printf("You have chosen: Average\n");
    }
    else if (input == 'F')
    {
        printf("You have chosen: Fail\n");
    }
    else {
        printf("you enter wrong keyword");
    }

    return 0;
}
