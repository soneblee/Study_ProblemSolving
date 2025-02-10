#include <stdio.h>

int main(){
    int n, max = 0;
    double num[1000], score[1000];
    double sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &score[i]);

        if(score[i] > max)
            max = score[i];
    }

    for(int i = 0; i < n; i++)
    {
        num[i] = (score[i] / max) * 100;

        sum += num[i];
    }
    
    printf("%f\n", sum / n);

    return 0;
}