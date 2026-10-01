#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter the number: ");
    scanf("%i", &num);

    if (num > 0)
        printf("The absolute value is %i.\n", num);
    else
        printf("The absolute value is %i.\n", -num);

    return 0;
}