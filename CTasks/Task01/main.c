#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>
int min_index(int a[N]) // функция нахождения инднкса минимального элемента
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
int max_index(int a[N]) //функция нахождения индекса максимального элемента
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
    int i=0;
    int a[N];
    int min_num;
    int max_num;
    int buf;
    srand(time(NULL));
    for (i=0;i<N;i++){
            a[i] = rand();
            printf("%d \n",a[i]);

    }
    printf("\n");
    min_num=min_index(a);
    max_num=max_index(a);
    buf=a[min_num];
    a[min_num]=a[max_num];
    a[max_num]=buf;


    for(i=0;i<N;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}
