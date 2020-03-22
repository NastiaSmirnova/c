#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>
int main()
{
    int i=0;
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
        if (((a[i]%2==0) && (a[i+1]%2==1))|| ((a[i]%2==1) && (a[i+1]%2==0)))
        {
            k++;
        }

    }
    printf("\n");
    if (k==N) {
        printf("true");
    }
    else printf("false");
    printf("%d",k);

    return 0;
}
