/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** Check if the given string is in only in uppercase.
*/

int my_str_isupper(char const *str)
{
    if (str[0] == '\0')
        return 1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return 0;
    }
    return 1;
}
