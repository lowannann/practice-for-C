#include <stdio.h>
#include <stdlib.h>

int main(){

    double f1;
    double f2;
    double cons1,cons2,cons3,cons4;
    
    scanf("%lf%lf", &f1, &f2);

    cons1=f1+f2;
    cons2=f1-f2;
    cons3=f1*f2;
    cons4=f1/f2;

    printf("%.2lf + %.2lf = %.2lf\n", f1, f2, cons1);
    printf("%.2lf - %.2lf = %.2lf\n", f1, f2, cons2);
    printf("%.2lf * %.2lf = %.2lf\n", f1, f2, cons3);
    printf("%.2lf / %.2lf = %.2lf\n", f1, f2, cons4);

    return 0;

}