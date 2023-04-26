/*
** EPITECH PROJECT, 2023
** ml_array_head
** File description:
** ml_array_head
*/

#ifndef ML_ARRAY_HEAD_
    #define ML_ARRAY_HEAD_


    #include <sys/types.h>

    /**
     * @brief The ml_print_str_array function display the content of
     * an array of strings in the standard output.
     *
     * @param tab: The string array to be displayed.
     * @return Nothing.
    */
    void ml_display_str_array(char **tab);

    /**
     * @brief ml_count_array_size function count the number of string
     * that contain 'array'
     *
     * @param array: The array you want to count the size.
     * @return size of the array (size_t).
    */
    size_t ml_count_array_size(const char **array);

#endif /* !ML_ARRAY_HEAD_ */
