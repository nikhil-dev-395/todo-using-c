#include <stdio.h>
#include <string.h>

int main()
{
    char todo[100];
    do
    {
        /* code */
        printf("enter your todo here : \n");
        fgets(todo, sizeof(todo), stdin);
    } while (strlen(todo) == 0);

    printf("\n  todo :  %s", todo);

    return 0;
}
