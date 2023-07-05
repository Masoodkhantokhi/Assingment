#include <stdio.h>

int main() {
  int number;
  printf("Enter a number between 1 and 100: ");
  scanf("%d", &number);

  // Check if the number is prime
  int i;
  int flag = 1;
  for (i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
      flag = 0;
      break;
    }
  }

  // Print the result
  if (flag == 1) {
    printf("%d is a prime number.\n", number);
  } else {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}

