#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>
int min_index(int a[N])
{
    int min = a[0];
    int min_id=0;
    int i=0;
    for (i=0;i<N;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
            min_id=i;
        }
    }

    return min_id;
}
int max_index(int a[N])
{
    int max = a[0];
    int max_id=0;
    int i=0;
    for (i=0;i<N;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            max_id=i;
        }
    }

    return max_id;
}
int main()
{

    int a[N];
    srand(time(NULL));
    int summ=0;
    int i=0;
    int max_num;
    int min_num;
    for (i=0;i<N;i++)
    {
            a[i] = rand()%10;
            printf("%d \n",a[i]);
    }
    min_num = min_index(a);
    max_num = max_index(a);

    if (max_num < min_num)
    {
        for (i=max_num ;i<=min_num;i++)
        {
            summ=summ+a[i];
        }
    }
    else {
        for (i=min_num;i<=max_num;i++)
            {
            summ=summ+a[i];

            }
    }
    printf("\n");
    printf("%d \n",min_num);
    printf("%d \n", max_num);
    printf("%d \n",summ);

    return 0;
}
