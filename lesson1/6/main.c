#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;
    scanf("%d",&n);
    while (n!=0){
        if (n%10==7)
            i++;
        n=n/10;
        }
    printf("%d",i);
    return 0;
}
