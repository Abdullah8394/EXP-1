/*
    Exp. No.5
    Title: WAP to find the factorial of a number using iterative and recursive function.
    Name: KHAN ABDULLA ABDUL REHMAN
    Class & Div: FE & E
    UIN: 241S055
*/

#include <stdio.h>

int factorialRecursive(int n) {
  if (n == 0 || n == 1) {
  return 1;

  }

  return n * factorialRecursive(n - 1);
}

int factorialIterative(int n) {

  int factorial = 1;
  for (int i = 1; i <= n; i++) {
  factorial *= i;
  }

  return factorial;
}

  int main() {

    int num, result;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {4
      printf("Factorial is not defined for negative numbers.\n");
      }

    else {

      result = factorialIterative(num);
      printf("Factorial of %d using iterative function is: %d\n", num, result);
      result = factorialRecursive(num);
      printf("Factorial of %d using recursive function is: %d\n", num, result);
   }

   return 0;

}



/*   **OUTPUT**

Enter a number to find its factorial: 3

Factorial of 3 using iterative function is: 6

Factorial of 3 using recursive function is: 6

*/
