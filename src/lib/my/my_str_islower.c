/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** Check if the given string is in only in lowercase.
*/

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return 1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return 0;
    }
    return 1;
}
