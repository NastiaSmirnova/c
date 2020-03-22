#include <stdio.h>
#include <stdlib.h>
#define N 5
#include <time.h>
void BubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int i=0;
    int a[N];
    int b[N];
    int c[N+N];


    srand(time(NULL));
    for (i=0;i<N;i++)
        {
            a[i] = rand()%2;
            printf("%d \n",a[i]);
        }
    printf("\n");
    for (i=0;i<N;i++)
        {
            b[i] = rand()%10;
            printf("%d \n",b[i]);
        }
     printf("\n");
    for(i=0;i<N+N;i++)
    {
        if (i<N)
        {
            c[i]=a[i];
        }
        if (i>=N)
        {
            c[i]=b[i-N];
        }

    }
    BubbleSort(c, N+N);
    printf("\n");
    for(i=0;i<N+N;i++)
    {
        printf("%d \n",c[i]);
    }
    int k=1;
    for(i=0;i<N+N-1;i++)
    {
       if (c[i]!=c[i+1])
       {
           k++;
       }
    }
    printf("\n");
    printf("%d",k);

    return 0;
}
