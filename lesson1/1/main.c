#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum=0;
    int i = 1;
    for (i=1;i<6;i++){
        int a;
        scanf("%d",&a);
        sum+=a;
    }

    printf("%f", sum/5.0);
    return 0;
}
