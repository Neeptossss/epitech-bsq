/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** Make a string uppercase.
*/

char *my_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
            i++;
        } else
            i++;
    }
    return (str);
}
