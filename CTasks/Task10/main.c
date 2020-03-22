#include <stdio.h>
#include <stdlib.h>
int count_digits(char *x)
{
    int i=0;
    int k=0;
    while (x[i]!=0){
            if ((int)x[i]>=48 && (int) x[i] <=57){
                k++;
            }

                i++;
    }
    return k;
}

int main()
{
    char d[5];
    scanf("%s",d);
    printf("%d \n",count_digits(d));
    return 0;

}
