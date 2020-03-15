#include <stdio.h>
#include <stdlib.h>
const double pi=3.14159;
double per(double r){
    return(2*pi*r);
}
double pl(double r){
    return(2*pi*r*r);
}
double diam(double r){
    return(2*r);
    }
int main()
{
    double r;

    scanf("%lf",&r);

    printf("%f\n", per(r));
    printf("%f\n", pl(r));
    printf("%f\n", diam(r));
    return 0;
}
