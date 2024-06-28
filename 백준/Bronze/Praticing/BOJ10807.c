// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오

#include <stdio.h>

int main() {

    int i, j, k;
    int count = 0;

    scanf("%d", &i); // 몇 개의 정수를 입력 받을 것인지
    int blank[i]; // 배열

    for(j=0; j<i; j++)
    {
        scanf("%d ", &blank[j]); //i개의 정수를 입력하여 blank 배열에 저장
    }
        
    scanf("%d", &k); // v를 입력받음
        
    for(int x = 0; x < i; x++)
    {
        if(blank[x] == k) // 배열 안의 값이 k와 같다면 count ++
            count++;
    }  
    
    printf("%d\n", count);



    return 0;
}