#include <stdio.h>
int main(int argc, char **argv, char **envp)
{
    int i=0;
    while (*(envp+i))
    {
        printf("env-%d is |%s|\n",i,*(envp+i));
        i++;

    }

    return (0);

}