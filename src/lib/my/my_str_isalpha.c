/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Check if there is only alphabetical characters in the string.
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return 1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return 0;
    }
    return 1;
}
