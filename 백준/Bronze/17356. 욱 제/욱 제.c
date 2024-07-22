#include <stdio.h>
#include <math.h>

int main(){
    int i, j;

    scanf("%d %d", &i, &j);

    double m = (double)(j-i) / 400;
    double num = pow(10, m);
    double result = 1/(1+num);

    printf("%lf", result);
    return 0;
}