#include <stdio.h>

int main(void) {
  int i, j, k; //시, 분, 걸리는 시간(분 단위)

  scanf("%d %d", &i, &j);
  scanf("%d", &k);
  /*
  0분부터 1000분까지
  60으로 나누었을 때 몫: 시간, 나머지: 분
  */
  int a = k / 60;
  int b = k % 60;

  if (j + b >= 60) {
    if(i + a + 1 >= 24){
      printf("%d %d", i + a + 1 - 24, j + b - 60);
    }else
      printf("%d %d", i + a + 1, j + b - 60);
  }else{
    if(i + a >= 24)
      printf("%d %d", i + a - 24, j + b);
    else
      printf("%d %d", i + a, j + b);
  }
}
