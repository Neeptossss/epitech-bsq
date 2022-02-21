/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** Return the nearest prime number of the given number.
*/

int my_is_prime(int nb);

int my_find_prime_sup (int nb)
{
    while (my_is_prime(nb) != 1)
        nb++;
    return (nb);
}
