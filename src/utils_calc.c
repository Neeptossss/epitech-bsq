/*
** EPITECH PROJECT, 2021
** src [WSL: Arch]
** File description:
** utils_stats
*/

#include "include/my.h"

int get_col(char *loaded)
{
    int i = 0;
    int k;
    for ( ; loaded[i] != '\n'; i++);
    for (k = i + 1; loaded[k] != '\n'; k++);
    return k - i - 1;
}

int get_row(char *loaded)
{
    char buffer[10];
    for (int i = 0; loaded[i] != '\n'; i++)
        buffer[i] = loaded[i];
    return my_getnbr(buffer);
}

int get_min(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int check_rows(int nb_cols, char *loaded)
{
    int len = 0;
    int i = 0;
    for (; loaded[i] != '\n'; i++);
    i++;
    for (; loaded[i]; i++) {
        len = 0;
        for (; loaded[i] != '\n'; i++)
            len++;
        if (len != nb_cols)
            return -1;
    }
    return 0;
}
