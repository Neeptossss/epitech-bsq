/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Find a string in another string.
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    if (*str == '\0')
        return 0;
    int to_findlen = my_strlen(to_find);
    if (my_strncmp(str, to_find, to_findlen) == 0)
        return (str);
    return my_strstr(str + 1, to_find);
}
