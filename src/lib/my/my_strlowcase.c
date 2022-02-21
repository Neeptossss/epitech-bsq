/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** Make a string all lowcase.
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
            i++;
        } else
            i++;
    }
    return (str);
}
