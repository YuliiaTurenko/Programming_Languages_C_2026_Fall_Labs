#include <stdio.h>

long long factorial(int n) {
  long long result = 1;

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: n can't be negative.\n");
  } else {
    printf("Factorial of %d = %d\n", n, factorial(n));
  }

  return 0;
}
