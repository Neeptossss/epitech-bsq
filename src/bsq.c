/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-gwenael.hubler [WSL: Arch]
** File description:
** main
*/

#include "include/my.h"
#include <stdio.h>

void draw_square(int **arr, t_bsq *bsq)
{
    char **map = convert_arr_to_2d(bsq->map);
    int start_row = bsq->square_row + 1 - bsq->size;
    int start_col = bsq->square_col + 1 - bsq->size;
    for (int i = start_row; i <= bsq->square_row; i++) {
        for (int k = start_col; k <= bsq->square_col; k++) {
            map[i][k] = 'x';
        }
    }
    for (int i = 0; i < bsq->nb_rows; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
}

void find_bsq_cols(int **arr, t_bsq *bsq, int i)
{
    int j;
    for (j = 0; j < bsq->nb_cols; j++) {
        if (i == 0 || j == 0);
        else if (arr[i][j] > 0) {
            arr[i][j] = 1 + get_min(arr[i][j - 1],
                    arr[i - 1][j], arr[i - 1][j - 1]);
        }
        if (arr[i][j] > bsq->size) {
            bsq->size = arr[i][j];
            bsq->square_row = i;
            bsq->square_col = j;
        }
    }
}

int **find_bsq_rows(int **arr, t_bsq *bsq)
{
    bsq->size = 0;
    for (int i = 0; i < bsq->nb_rows; i++) {
        find_bsq_cols(arr, bsq, i);
    }
    draw_square(arr, bsq);
}

void load_2d_arr_from_file(char *loaded, int nb_rows, int nb_cols)
{
    t_bsq *bsq = malloc(sizeof(t_bsq));
    bsq->map = loaded;
    int **arr = malloc(sizeof(int *) * (nb_rows + 1));
    int j;
    for (j = 1 ; loaded[j - 1] != '\n'; j++);
    for (int i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(int) * (nb_cols + 1));
        for (int k = 0 ; loaded[j] != '\n' && loaded[j] != '\0'; k++) {
            arr[i][k] = (loaded[j] == '.') ? 1 : 0;
            j++;
        }
        j++;
    }
    arr[nb_rows - 1] = 0;
    nb_rows--;
    bsq->nb_rows = nb_rows;
    bsq->nb_cols = nb_cols;
    find_bsq_rows(arr, bsq);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("Usage:");
        my_putstr(av[0]);
        my_putstr(" [file]\n");
        return (84);
    }
    char *loaded = load_file_in_mem(av[1]);
    int nb_rows = get_row(loaded) + 1;
    int nb_cols = get_col(loaded);
    if (check_rows(nb_cols, loaded) == -1) return 84;
    load_2d_arr_from_file(loaded, nb_rows, nb_cols);
    return 0;
}
