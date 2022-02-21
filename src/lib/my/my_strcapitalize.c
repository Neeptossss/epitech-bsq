/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Make a string uppercase.
*/

char *my_strlowcase(char *str);

int testc(char const *str, int i)
{
    if (str[i - 1] >= 23 && str[i - 1] <= 47)
        return 1;
    return 0;
}

int testn(char const *str, int i)
{
    if (str[i - 1] < 48 || str[i - 1] > 57)
        return 1;
    return 0;
}

char testlow(char a)
{
    if (a <= 'z' && a >= 'a')
        a = a + 32;
    return a;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    my_strlowcase(str);
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    while (str[i] != '\0') {
        if (testc(str, i) == 1 || str[i - 1] <= ';' && testn(str, i) == 1) {
            str[i] = testlow(str[i]);
        }
        i++;
    }
    return str;
}
