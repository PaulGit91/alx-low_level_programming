#include <stdio.h>
/**
 * main - ENTRY
 * Return:Always 0
 */
int main(void)
{
  char c;
  int i;
  long li;
  long long lli;
  float f;

  printf("Size of a char: %li byte(s).\n", sizeof(c));
  printf("Size of an int: %li byte(s).\n", sizeof(i));
  printf("Size of a long int: %li byte(s).\n", sizeof(li));
  printf("Size of a long long int: %li byte(s).\n", sizeof(lli));
  printf("Size of a float: %li byte(s).\n", sizeof(f));
  return (0);
}
