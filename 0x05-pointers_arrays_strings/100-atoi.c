#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts an integer into a string
 * @s: the string
 * Return: value
 */
int _atoi(char *s)
{

int sign = 1;
unsigned int num = 0;

while (!('0' <= *s && *s <= '9') && *s != '\0')
{
if (*s == '-')
sign *= -1;
if (*s == '+')
sign *= +1;
s++;
}
while ('0' <= *s && *s <= '9' && *s != '\0')
{
num = (num * 10) + (*s - '0');
s++;
}
return (num *sign);
}
