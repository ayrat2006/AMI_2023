//task3_1.c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0
int main(){
    double x,e,s=0,a=1,i=0;    
    scanf("%lf%lf",&x,&e);
    do    {
        s+=a;        
        a=a*(-1)*x*(2*i-1)/(2*(i+1));
        i+=1;    
    }
    while(fabs(a)>e);
    printf("%.15lf\n%.15lf",sqrt(1+x),s);
}