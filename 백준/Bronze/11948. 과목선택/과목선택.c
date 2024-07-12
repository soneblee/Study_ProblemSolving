#include <stdio.h>

int main(){
    int a, b, c, d, e, f;
    int num = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    if(e>f){
        if(a<=b && a<=c && a<=d)
            num = e + b + c + d;
        else if(b<=a && b<=c && b<=d)
            num = e + a + c + d;
        else if(c<=a && c<=b && c<=d)
            num = e + a + b + d;
        else if(d<=a && d<=b && d<=c)
            num = e + a + b + c;
    }
    else{
        if(a<=b && a<=c && a<=d)
            num = f + b + c + d;
        else if(b<=a && b<=c && b<=d)
            num = f + a + c + d;
        else if(c<=a && c<=b && c<=d)
            num = f + a + b + d;
        else if(d<=a && d<=b && d<=c)
            num = f + a + b + c;
    }  

    printf("%d", num);

    return 0;
}