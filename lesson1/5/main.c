#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b1,b2;
    scanf("%d",&n);
    a=n%100;
    b1=a%10;
    b2=a/10;

    if ((n/10000==b1) && ((n/1000)%10==b2))
            printf("true");
    else printf("false");
    return 0;
}
