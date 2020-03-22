#include <stdio.h>
#include <stdlib.h>
#define N 3
#include <time.h>
int main()
{
    int i=0;
    int a[N];
    int k=0;

    srand(time(NULL));
    for (i=0;i<N;i++)
        {
            a[i] = rand()%2;
            printf("%d \n",a[i]);
        }
    for (i=0;i<N/2;i++)
    {
       if (a[i] == a[N-i-1])
       {
         k++;
       }

        }
    if (k==N/2)
    {
        printf("symmetric");
    }
    else printf("asymmetrical");


    return 0;
}
