#include <stdio.h>

int main(void)
{
    int num;
    int sum=0;
    int i;
    
    printf("input a integer: ");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i ;
    }

    printf("the sum is %i\n", sum);

    return 0;
}
