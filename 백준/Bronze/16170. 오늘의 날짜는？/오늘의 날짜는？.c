// time 헤더파일을 통해 오늘 날짜 출력

#include <stdio.h>
#include <time.h>

int main(){

    time_t t = time(NULL); // time()함수에서 사용하는 time_t 형 변수 t 정의
    struct tm tm = *localtime(&t); // time_t형 변수 t를 struct tm 구조체 값으로 변환
    // localtime() 함수는 struct tm 구조체 포인터 값을 반환함

    printf("%d\n%02d\n%02d\n",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday);
    // %02d 는 최소 두 자릿수로 출력하는 것
    return 0;
}