/*
** EPITECH PROJECT, 2023
** ml_itoa
** File description:
** ml_itoa
*/

#include <stdlib.h>
#include "ml_str_h.h"
size_t ml_nbrlen(int nbr);

char *ml_itoa(int nb)
{
    char *str = malloc(sizeof(char) * (ml_nbrlen(nb) + 1));
    char temp;
    size_t parse = 0;

    if (!str)
        return (NULL);
    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    for (; nb != 0; parse++) {
        temp = (nb % 10) + 48;
        str[parse] = temp;
        nb /= 10;
    }
    str[parse] = '\0';
    ml_revstr(&str);
    return (str);
}
