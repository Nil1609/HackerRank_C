#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float a,b;
    
    scanf("%d %d", &x, &y);
    printf("%d %d\n",x+y,x-y);
    
    scanf("%f %f", &a, &b);
    printf("%.1f %.1f",a+b, a-b);
    
    return 0;
}
