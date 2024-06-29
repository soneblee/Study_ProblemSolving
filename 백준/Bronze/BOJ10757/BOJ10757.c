/*
a + b 를 계산하는 프로그램
a 와 b의 크기가 0~10^10000으로 크기 때문에 %d ~ %llu 로 표현이 불가능해서 문자열로 해결해야 함
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char A[10001], B[10001], C[10002];
    int i, AN, BN, CN, temp, carry = 0, pA, pB;
 
    scanf("%s %s", &A, &B);
 
    AN = strlen(A);
    BN = strlen(B);
 
    Reverse(A, AN);
    Reverse(B, BN);
 
    for (i = 0; i < AN || i < BN; ++i) {
        if (!(A[i] >= '0' && A[i] <= '9'))
            pA = 0;
        else
            pA = A[i] - '0';
        if (!(B[i] >= '0' && B[i] <= '9'))
            pB = 0;
        else
            pB = B[i] - '0';
        temp = pA + pB + carry;
        //받아올림이 있는 경우
        if (temp >= 10) {
            C[i] = (temp % 10) + '0';
            carry = 1;
        }
        //받아올림이 없는 경우
        else {
            C[i] = temp + '0';
            carry = 0;
        }
    }
    //받아올림이 있는 경우
    if (carry == 1) {
        C[i] = '1';
        C[i + 1] = '\0';
        CN = i + 1;
    }
    //받아올림이 는 경우
    else {
        C[i] = '\0';
        CN = i;
    }
 
    Reverse(C, CN);
 
    printf("%s\n", C);
    
    return 0;
}
 
void Reverse(char str[], int len) {
    int i;
    char temp;
 
    for (i = 0; i < len / 2; ++i) {
        temp = str[i];
        str[i] = str[len - i-1];
        str[len - i - 1] = temp;
    }
}
 