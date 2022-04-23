#include "main.h"
#include <stdio.h>

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 *
 * Return: a pointer to @dest
 */
int main(void)
{
            char s1[98] = "Hello ";
                char s2[] = "World!\n";
                    char *p;

                        printf("%s\n", s1);
                            printf("%s", s2);
                                p = _strcat(s1, s2);
                                    printf("%s", s1);
                                        printf("%s", s2);
                                            printf("%s", p);
                                                return (0);
}

