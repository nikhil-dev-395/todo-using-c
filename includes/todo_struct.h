#ifndef TODO_STRUCT_H
#define TODO_STRUCT_H

typedef struct
{
    int id;
    char description[100];
    bool isComplete;
} Todo;

#endif
