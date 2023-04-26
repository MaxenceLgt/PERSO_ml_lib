/*
** EPITECH PROJECT, 2023
** ml_list_head
** File description:
** ml_list_head
*/

#ifndef ML_LIST_HEAD_
    #define ML_LIST_HEAD_

    #include "ml_list_h.h"


    /**
     * @brief ml_create_list function create a new linked list 'ml_list *'
     * by allocating her and setting her head, tail to NULL and size to 0.
     *
     * @return Linked list (ml_list *).
    */
    ml_list *ml_create_list(void);

    /**
     * @brief ml_add_node_back function add a node 'ml_node' at the end of
     * 'list' that contain will 'data' in it.
     *
     * @param list List where 'data' will be stored.
     * @param data Pointer of any type to the data to add.
    */
    void ml_add_node_back(ml_list *list, void *data);

    /**
     * @brief ml_add_node_front function add a node 'ml_node' at the begining
     * of 'list' that contain will 'data' in it.
     *
     * @param list List where 'data' will be stored.
     * @param data Pointer of any type to the data to add.
    */
    void ml_add_node_front(ml_list *list, void *data);

    /**
     * @brief ml_display_list function display the content of 'list' for
     * all node.
     *
     * @param list List to display.
     * @param f_ptr Pointer to the function that will display data.
     * NULL if there is not.
    */
    void ml_display_list(ml_list *list, void (*f_ptr)(void *));

    /**
     * @brief ml_destroy_node function destroy a node 'node' inside 'list'
     *
     * @param list List where the node is.
     * @param node Node to destroy.
     * @param f_ptr Pointer to the function that will destroy node data.
     * NULL if there is not.
    */
    void ml_destroy_node(ml_list *list, ml_node *node, void (*f_ptr)(void *));

    /**
     * @brief ml_destroy_list function destroy 'list' using free and
     * its content.
     *
     * @param list List to destroy.
     * @param f_ptr Pointer to the function that will destroy data.
     * NULL if there is not.
    */
    void ml_destroy_list(ml_list *list, void (*f_ptr)(void *));

#endif /* !ML_LIST_HEAD_ */
