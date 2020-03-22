#include <stdio.h>
#include <stdlib.h>
#define N 5
#include <time.h>
void BubbleSort(double a[], int array_size)
{
    int i, j;
    double temp;
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
    double a[N];


    for (i=0;i<N;i++)
        {

            scanf("%lf",&a[i]);
        }

    printf("\n");
    BubbleSort(a, N);

    for (i=0;i<N;i++)
        {
            printf("%f \n",a[i]);
        }

    double max;
    max= a[0];
    int k=1;

    for (i=0;i<N;i++)
        {
            if (a[i]>max){
                k++;
                max=a[i];
            }
        }
    printf("\n");
    printf("%d",k);
    printf("\n");

    double b[k];
    double max_value;
    max_value= a[0];
    b[0]=a[0];
    int l=0;
    for (i=0;i<N;i++)
    {
        if (a[i]>max_value){
            l++;
            max_value=a[i];
            b[l]=a[i];
        }

    }
    for (i=0;i<k;i++)
    {
       printf("%f \n",b[i]);
    }



    return 0;
}
