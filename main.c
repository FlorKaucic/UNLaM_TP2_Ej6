#include <stdio.h>
#include <stdlib.h>

#define REDONDEAR(x) ((x)>=((int)(x)+0.5))?(int)(x)+1:(int)(x)

int main()
{
    printf("\nRedondeo 6.404569: %d\nRedondeo 6.502: %d\nRedondeo 7.93: %d\nRedondeo 3.5: %d",REDONDEAR(6.404569),REDONDEAR(6.502),REDONDEAR(7.93),REDONDEAR(3.5));
    return 0;
}
