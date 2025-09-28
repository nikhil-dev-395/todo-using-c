#include <stdio.h>
#include <string.h>

int main()
{
    char todo[100];
    do
    {
        printf("enter your todo here : \n");
        fgets(todo, sizeof(todo), stdin);
    } while (strlen(todo) == 0);

    //  now we have todo
    /**
     * we need to add it on json
     */
  
    return 0;
}
