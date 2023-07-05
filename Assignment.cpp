#include <stdio.h>

int main()
    {
    int number;
    int tryAgain = 0;

    do 
	{
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 100) {
        printf("The number is greater than 100. Press 1 to try again: ");
        scanf("%d", &tryAgain);
        } 
        int isPrime = 1;
    for (int i = 2; i < number; i++)
	{
    if (number % i == 0)
	{
    isPrime = 0;
    break;
    }
    }
    if (isPrime) {
    printf("1\n");
    } 
	else 
	{
    printf("0\n");
  }
    } while (tryAgain == 1);

    return 0;
}

