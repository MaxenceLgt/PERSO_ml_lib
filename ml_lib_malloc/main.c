/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "ml_lib_head.h"

int main(int ac, char **av)
{
    char **array = ml_str_tok("Hello World ,edsds dsq", "d ");

    ml_display_str_array(array);
    ml_destroy_str_array(array);
    return (0);
}
