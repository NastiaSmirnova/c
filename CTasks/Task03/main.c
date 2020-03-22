#include <stdio.h>
#include <stdlib.h>
#define N 10
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
    int i =0;
    int a[N];
    srand(time(NULL));
    for (i=0;i<N;i++)
    {

            a[i] = rand()%6;
            printf("%d \n",a[i]);
    }
    BubbleSort(a,N);
    printf("\n");
    for (i=0;i<N;i++)
    {


            printf("%d \n",a[i]);
    }
    int max_amount=1;
    int k=1;
    for (i=0;i<N-1;i++){
            if (a[i]==a[i+1])
                {
                k++;
                if (k>max_amount){
                    max_amount=k;}
                }
            else k=1;


    }
    printf("\n");
    printf("%d",max_amount);
    return 0;
}
