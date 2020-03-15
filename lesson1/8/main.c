#include <stdio.h>
#include <stdlib.h>
long int fact(int n){
    int count =1;
    long int total =1;
    while(count<=n){
        total=total*count;
        count++;}

    return(total);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",fact(n));
    return 0;
}
