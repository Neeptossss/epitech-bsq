/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bsbsq-gwenael.hubler [WSL: Arch]
** File description:
** open_file
*/

#include "include/my.h"

int fs_open_file(char const *filepath)
{
    int fd;
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr("[ERROR] CANNOT OPEN THE FILE\n");
        exit(84);
    } else {
        return fd;
    }
}

char *load_file_in_mem(char const *filepath)
{
    struct stat sb;
    stat(filepath, &sb);
    int buffer_size = sb.st_size;
    char *buffer = malloc(sizeof(char) * (buffer_size + 1));
    int fd = fs_open_file(filepath);
    read(fd, buffer, buffer_size);
    buffer[buffer_size] = '\0';
    close(fd);
    return buffer;
}

char **convert_arr_to_2d(char *loaded)
{
    int nb_rows = get_row(loaded) + 1;
    int nb_cols = get_col(loaded);
    char **arr = malloc(sizeof(char *) * (nb_rows + 1));
    int j;
    for (j = 0; loaded[j] != '\n'; j++);
    j++;
    for (int i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(char) * (nb_cols + 1));
        for (int k = 0; loaded[j] != '\n' && loaded[j] != '\0'; k++) {
            arr[i][k] = loaded[j];
            j++;
        }
        j++;
        arr[i][nb_cols + 1] = '\0';
    }
    arr[nb_rows + 1] = 0;
    return arr;
}
