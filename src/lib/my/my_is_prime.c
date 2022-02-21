/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** Test if given number is prime or not.
*/

int my_is_prime(int nb)
{
    int i = 2;
    if (nb >= 2147483647)
        return (0);
    if (nb < 2)
        return (0);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
