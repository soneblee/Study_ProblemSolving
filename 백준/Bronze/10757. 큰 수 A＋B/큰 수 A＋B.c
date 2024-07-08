// 10^10000 까지가 범위이기 때문에 10001자리까지 담을 수 있는 문자열 배열을 사용
// long long 은 10^19까지 표현할 수 있음

#include <stdio.h>
#include <string.h>

// 일의 자리 숫자부터 계산할 때 편리하도록 숫자의 순서를 뒤집어 준다
void reverse(char arr[], int len){
    char temp;
    for(int i=0; i<len/2; i++){
        temp = arr[i];
        arr[i] = arr[len - i -1];
        arr[len - i - 1] = temp;
    }
}

int main(){
    
    char a[10002], b[10002], result[10003];

    int i, an, bn, cn, temp, carry = 0, pa, pb;

    scanf("%s %s", a, b);

    an = strlen(a);
    bn = strlen(b);

    reverse(a, an);
    reverse(b, bn);

    // 두 수의 자리수를 하나씩 더하는 과정
    for (i = 0; i < an || i < bn; ++i) { // a와 b 중에 더 긴 것에 도달할 때까지
        
        // 각 자리의 숫자를 추출하고 추출한 문자를 숫자로 변환함
        if (!(a[i] >= '0' && a[i] <= '9'))
            pa = 0; // 길이를 초과하는 값은 0으로 바꿈
        else
            pa = a[i] - '0'; // 문자를 숫자로 변환(문자 아스키코드 - 0 아스키코드)

        if (!(b[i] >= '0' && b[i] <= '9'))
            pb = 0;
        else
            pb = b[i] - '0';

        temp = pa + pb + carry;
        
        //받아올림이 있는 경우
        if (temp >= 10) {
            result[i] = (temp % 10) + '0'; // 더한 값이 10을 넘으면 일의 자리 숫자만을 result에 저장함
            carry = 1;
        }
        //받아올림이 없는 경우
        else {
            result[i] = temp + '0';
            carry = 0;
        }
    }
    // 최종 계산 후 carry가 남아있는 경우(받아올림이 있는 경우)
    if (carry == 1) {
        result[i] = '1';
        result[i + 1] = '\0';
        cn = i + 1;
    }
    //받아올림이 는 경우
    else {
        result[i] = '\0';
        cn = i;
    }
 
    reverse(result, cn);
 
    printf("%s\n", result);
    
    return 0;    
    
    
    return 0;
}