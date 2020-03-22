#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>
int main()
{
    int i =0;
    int a[N];
    int k=1;
    srand(time(NULL));
    for (i=0;i<N;i++)
    {

            a[i] = rand()%3;
            printf("%d \n",a[i]);
    }
    for (i=0;i<N-1;i++)
    {
        if (a[i]<=a[i+1]){
            k++;}
    }
    if (k==N){
        printf("true");}
    else printf("false");
    return 0;
}
