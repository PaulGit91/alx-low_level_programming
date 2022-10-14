#include <stdio.h>
/**
* main - ENTRY
* Return: Always 0
*/
int main(void)
{
char i;
for (int i  = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (int i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
