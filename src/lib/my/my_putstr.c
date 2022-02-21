/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Displays one by one characters of given string.
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
