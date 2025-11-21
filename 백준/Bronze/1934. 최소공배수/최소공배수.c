#include <stdio.h>

int main(){
    int t, a, b;
    int num;

    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        num = a * b;

        while(a != b){
            if (a > b){
                a -= b;
            }
            else {
                b -= a;
            }
        }
        num = num / a;
        printf("%d\n", num);
    }

    return 0;
}