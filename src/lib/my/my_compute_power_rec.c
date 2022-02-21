/*
** EPITECH PROJECT, 2021
** my_computer_power_rec
** File description:
** Recursively find the power of number given.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    nb *= my_compute_power_rec(nb, p - 1);
    if (nb >= 2147483647)
        return (0);
    return (nb);
}
