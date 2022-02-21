/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** Copy n character from a string to another.
*/

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    for (i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (i == n)
        dest[i] = '\0';
    return dest;
}
