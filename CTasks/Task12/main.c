#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* unite_string (char* x, char* y)
{
    char* new_str;
    int len_x=strlen(x);
    int len_y=strlen(y);
    new_str = malloc((len_x+len_y)*sizeof(char));
    int i =0;
    for (i=0;i<len_x+len_y;i++)
    {
        if (i<len_x) {
                new_str[i]=x[i];

        }
        else new_str[i]=y[i-len_x];
    }
    new_str[len_x+len_y]=0;
    return new_str;


}

int main()
{
    char *k;
    char *l;
    char *us;
    l = malloc(360*sizeof(char));

    k = malloc(360*sizeof(char));

    scanf("%s",k);
    scanf("%s",l);
    us=unite_string(k,l);
    printf("%s",us);
    free(l);
    free(k);
    free(us);
    return 0;
}
