#include "main.h"
/**
* binary_to_uint -The function that converts a binary number to an unsigned int.
* @b: The pointer to a string that has a binary number
*
* Return: unsigned int with decimal value of binsry number, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int num;
num = 0;
if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
num <<= 1;
if (b[a] == '1')
num += 1;
}
return (num);
}

