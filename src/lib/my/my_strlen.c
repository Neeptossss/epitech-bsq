/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Return the lenth of the given string.
*/

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
