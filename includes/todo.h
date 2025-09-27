#ifndef TODO_H
#define TODO_H
#include <stdbool.h>

/**
 * making structure for todo , like how we will accept the input from user and perform
 * some operations
 */
void addTodo(char inputString[100], bool confirm);
void fetchAllTodo(bool confirm);
void getSingleTodo(int index, bool confirm);
void updateSingleTodo(int index, char inputString[100], bool confirm);
void deleteSingleTodo(int index, bool confirm);
void deleteAllTodos(bool confirm);

#endif;
