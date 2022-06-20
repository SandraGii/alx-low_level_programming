#include "main.h"
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int c = 0;
int c2 = 0;
if (needle[0] == '\0')
{
return (&haystack[0]);
}
while (haystack[c])
{
if (haystack[c] == needle[c2])
{
c++;
c2++;
if (needle[c2] == '\0')
return (&haystack[c - c2]);
}
else
{
c++;
c = (c - c2);
c2 = 0;
}
}
return ('\0');
}
