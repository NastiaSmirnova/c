#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_chr (char *s, char c)
{
    int i=0;
    while (s[i]!=c && s[i]!=0)
    {
        i++;

    }
    if (i==strlen(s))
    {
        return -1;
    }
    else return i+s;
}


int main()
{
    char *l;
    l = malloc(360*sizeof(char));
    char k;
    scanf("%c",&k);
    scanf("%s",l);
    printf("%d", str_chr (l,k));
    return 0;
}

