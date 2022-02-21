/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int destlen = my_strlen(dest);
    while (src[i] != '\0' && i < nb) {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return dest;
}
