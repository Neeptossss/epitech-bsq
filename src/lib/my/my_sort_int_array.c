/*
** EPITECH PROJECT, 2021
** my_sort_int_array
** File description:
** Sort given int array.
*/

int *my_sort_int_array(int *array, int size)
{
    int i = 0;
    int temp = 0;
    while (i != size) {
        if (i > 0 && array[i] < array[i - 1]) {
            temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            i -= 2;
        }
        i++;
    }
    return array;
}
