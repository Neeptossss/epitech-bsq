/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** Find the square root of the given number.
*/

int my_compute_square_root(int nb)
{
    int a = 1;
    if (nb < 0 || nb == 0)
        return (0);
    while (a * a != nb) {
        a++;
        if (a > nb)
            return (0);
    }
    return (a);
}
