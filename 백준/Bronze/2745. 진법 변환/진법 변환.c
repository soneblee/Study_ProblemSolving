#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char n[10000]; // b진법 수 n
    int b, digit;
    int result = 0;

    scanf("%s %d", n, &b);

    int len = strlen(n);

    for (int i = 0; i < len; i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            digit = n[i] - '0';
        }
        else if (n[i] >= 'A' && n[i] <= 'Z')
        {
            digit = n[i] - 'A' + 10;
        }
        
        result += digit * pow(b, len - 1 - i);
    }

    printf("%d\n", result);

    
    return 0;
}