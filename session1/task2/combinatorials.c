#include <stdlib.h>
#include <stdio.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 *
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n)
{
  // the base case - this determines when the recursion should stop
  if (n == 0)
  {
    return 1;
  }

  return n * factorial(n - 1);
}

int nCr(int n, int r)
{
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int nPr(int n, int r)
{
  return factorial(n) / factorial(n - r);
}

int main(int argc, char **argv)
{
  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
  int n, r, total;
  char ch;

  sscanf(argv[1], "%d", &n);
  sscanf(argv[3], "%d", &r);
  sscanf(argv[2], "%c", &ch);

  if (argc != 4)
  {
    printf("Error: Invaid Number of Arguments\n");
    return 1;
  }

  switch (ch)
  {
  case 'P':
  case 'p':
    total = nPr(n, r);
    break;

  case 'C':
  case 'c':
    total = nCr(n, r);
    break;
  }
}