#include <stdio.h>

int main(void)
{
    int answer=59;
    int input;
    int trial = 0;

    do
    {
        /* code */
        printf("Guess the number: ");
        scanf("%i", &input);
        if(answer > input)
            printf("low!\n");
        else if(answer < input)
            printf("high!\n");

      trial++;
    } while (answer != input);
    
    printf("congratulations! You guessed the number in %i trials.\n", trial);
    return 0;
}
