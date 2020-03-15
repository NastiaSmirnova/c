#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum =0;
    int i=0;
    int n=1;
    while (i<10){
        sum+=n;
        i++;
        n++;
    }



    printf("%ld",sum);
    return 0;
}
