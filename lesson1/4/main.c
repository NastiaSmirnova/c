#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int step=1;
    int i=0;
    scanf("%d %d",&x,&y);
    while(i<y){
        step=step*x;
        i++;
    }

    printf("%d",step);
    return 0;
}
