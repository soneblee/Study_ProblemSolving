// %1d 로 입력받으면 가장 처음 입력된 정수 한자리만 입력이 됨
// 입력값이 10 10, a 10, 10 b, a b 일 때로 구분하여 계산 
#include <stdio.h>

int main(){
    int a;
    int b = 0;
    scanf("%d", &a);
        
    if (a == 1010){     // 10 10 일 때
        printf("20");
    }
    else if (a % 10 == 0){   // a 10
        a /= 100;
        printf("%d", 10 + a);
    }
    else{
        b += a % 10;
        a /= 10;
        if (a == 10){   // 10 b
            printf("%d", 10 + b);
        }
        else{           // a b
            printf("%d", a + b);
        }
    }
    return 0;
}