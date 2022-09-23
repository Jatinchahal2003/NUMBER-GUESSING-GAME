#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));

    // printf("random number is %d\n", rand());
    number = rand() % 100 + 1;

    do
    {
        printf("guess a number:");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("Hey , you got that in %d attempts\n", nguess);
        }
        nguess++;

    } while (number != guess);
    return 0;
}