/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Displays the number given as parameter.
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long n = nb;
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
        my_putchar((n % 10) + '0');
    } else
        my_putchar(n + '0');
}
