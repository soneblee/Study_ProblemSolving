/*
뉴비: 1학년 혹은 2학년
올드비: n학년 이하이면서 뉴비가 아닌 학생
tle: 뉴비도 올드비도 아닌 학생
*/

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    if(m == 1 || m ==2)
        printf("NEWBIE!");
    else if(m <= n)
        printf("OLDBIE!");
    else
        printf("TLE!");

    return 0;
}