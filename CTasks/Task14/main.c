#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fatoi (char *str)
{

    int i;
    int sum=0;
    int h=1;
    int len=strlen(str);
    for (i=len-1;i>=0;i--){

        if ((int)str[i]<48 || (int) str[i] >57)
        {
            return -1;
        }
        else  {
                sum= sum+((int)str[i]-48)*h;
                h=h*10;}
    }
    return sum;

}


int main()
{
    char *l;
    l = malloc(360*sizeof(char));
    scanf("%s",l);
    printf("%d",fatoi (l));
    free(l);

    return 0;
}
