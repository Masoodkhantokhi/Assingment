#include <stdio.h>
int isprime(int num)
{
    if (num < 2)
        return 0;
    for (int z= 2; z * z <= num; z++)
	{
        if (num % z == 0)
            return 0;
    }
    return 1;
}
int main() {
    int input;
    while (1) {
        printf("PLEASE ENTER A NUMBER BETWEEN 2 and 100: ");
        scanf("%d", &input);
        if (input >= 2 && input <= 100) {
            int result = isprime(input);
            if (result == 1)
                printf("THIS NUMBEER IS PRIME.\n");
            else
                printf("THIS NUMBER IS NOT PRIME.\n");
            break;
        } else {
            printf(" THIS NUMBER IS OUT OF RANGE . PRESS 1 to RETRY: ");
            int retry;
            scanf("%d", &retry);
            if (retry != 1)
               break;
        }
    }
    return 0;
}

