#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* double_string (char* x)
{
    char* new_str;
    int len=strlen(x);
    new_str = malloc((2*len)*sizeof(char));
    int i =0;
    for (i=0;i<2*len;i++)
    {
        if (i<len) {
                new_str[i]=x[i];

        }
        else new_str[i]=x[i-len];
    }
    new_str[2*len]=0;
    return new_str;


}

int main()
{
    char *k;

    k = malloc(360*sizeof(char));
    scanf("%s",k);
    printf("%s",double_string(k));
    return 0;
}
