#include <stdio.h>
#include <stdlib.h>

int strinput(char str[])
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        (str[i++]) = ch;
    (str[i]) = '\0';
    return i;
}

int main()
{
    printf("%d", 2*(__INT_MAX__+1));
}
