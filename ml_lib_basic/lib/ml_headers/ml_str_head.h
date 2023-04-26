/*
** EPITECH PROJECT, 2023
** ml_str_head
** File description:
** ml_str_head
*/

#ifndef ml_STR_HEAD_
    #define ml_STR_HEAD_

    #include <stdbool.h>
    #include <unistd.h>

    /**
     * @brief Verify if 'c' is alpha or num character.
     * @param c: Char to verify.
     * @return True if it is. False otherwise (bool).
    */
    bool ml_char_isalphanum(const char c);

    /**
     * @brief Verify if 'c' is num character.
     *
     * @param c: Char to verify.
     * @return True if it is. False otherwise (bool).
    */
    bool ml_char_isnum(const char c);

    /**
     * @brief Verify if 'c' is alpha character.
     *
     * @param c: Char to verify.
     * @return True if it is. False otherwise (bool).
    */
    bool ml_char_isalpha(const char c);

    /**
     * @brief Verify if 'c' is upcase alpha character.
     *
     * @param c: Char to verify.
     * @return True if it is. False otherwise (bool).
    */
    bool ml_char_isup(const char c);

    /**
     * @brief Verify if 'c' is lowcase alpha character.
     *
     * @param c: Char to verify.
     * @return True if it is. False otherwise (bool).
    */
    bool ml_char_islow(const char c);

    /**
     * @brief ml_strlen function get the length of 'str'.
     *
     * @param str: String to get length from.
     * @return Length in bytes of 'str'. (size_t)
    */
    size_t ml_strlen(char const *str);

    /**
     * @brief ml_strcmp compare 's1' and 's2' strings.
     *
     * @param s1: First string to compare.
     * @param s2: Second string to compare.
     * @return Integer less than, equal to, or greater than zero if s1 is
     * found, respectively, to be less than, to match, or be greater than
     * s2. (int)
    */
    int ml_strcmp(char const *s1, char const *s2);

    /**
     * @brief ml_strncmp compare the first 'n' bytes of
     * 's1' and 's2' strings.
     *
     * @param s1: First string to compare.
     * @param s2: Second string to compare.
     * @param n: Number of bytes to compare.
     * @return Integer less than, equal to, or greater than zero if
     * s1 (or the first n bytes) is found, respectively, to be less than,
     * to match, or be greater than s2. (int).
    */
    int ml_strncmp(char const *s1, char const *s2, size_t n);

    /**
     * @brief ml_putstr function display 'str' content in standar
     * output.
     *
     * @param str: String to display.
     * @return Nothing.
    */
    void ml_putstr(char const *str);

    /**
     * @brief ml_putstr_error function display 'str' content in standar error
     * output.
     *
     * @param str: String to display.
     * @return Nothing.
    */
    void ml_putstr_error(char const *str);

    /**
     * @brief ml_putchar function display 'c' into standar output.
     *
     * @param c: Character to display.
     * @return Nothing.
    */
    void ml_putchar(char const c);

    /**
     * @brief ml_putchar_error function display 'c' into standar error output.
     *
     * @param c: Character to display.
     * @return Nothing.
    */
    void ml_putchar_error(char const c);

    /**
     * @brief ml_put_nbr function display the content of an int
     * in the standar output.
     *
     * @param nb: Number to display.
     * @return Nothing.
    */
    void ml_put_nbr(int nb);

    /**
     * @brief ml_revstr function reverse 'str' string content.
     *
     * @param str: Pointer to the string to reverse.
     * @return Nothing.
    */
    void ml_revstr(char **str);

    /**
     * @brief ml_strlowcase function set all uppercase char from 'str'
     * in lowcase char.
     *
     * @param str: Pointer to the string to transform.
     * @return Nothing.
    */
    void ml_strlowcase(char **str);

    /**
     * @brief ml_strupcase function set all lowcase char from 'str'
     * in uppercase char.
     *
     * @param str: Pointer to the string you want to transform.
     * @return Nothing.
    */
    void ml_strupcase(char **str);

    /**
     * @brief ml_char_is_in_lst function verify if 'c' char is present
     * in 'lst' string.
     *
     * @param c: Character to find.
     * @param lst: List of char to verify.
     * @returns return true if 'c' is in 'lst'. False otherwise. (bool)
    */
    bool ml_char_is_in_lst(const char c, const char *lst);

#endif /* !ml_STR_HEAD_ */
