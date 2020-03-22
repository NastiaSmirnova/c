#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>
int main()
{
    int a[N];
    srand(time(NULL));
    int i=0;
    double g;
    for (i=0;i<N;i++)
    {

            a[i] = rand();
            printf("%d \n",a[i]);
    }
    scanf("%lf",&g);
    double min_value;
    int min_index;
    min_value= abs(g-a[0]);
    min_index=0;
    for (i=0;i<N;i++)
    {
        if (abs(g-a[i])<min_value)
        {
            min_value=abs(g-a[i]);
            min_index=i;
        }
    }
    printf("%d", a[min_index]);
    return 0;
}
