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

long int step(int x, int y) {
    long int result = 1;
    int count = 1;
    while (count <= y) {
        result *= x;
        count++;
    }
    return result;
}
double exp(int x) {
    double result = 1.0 + x;
    int count = 2;
    while (count <=6) {
        result += step(x,count) * 1.0 / fact(count);
        count++;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%f",exp(n));
    return 0;
}
