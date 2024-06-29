#include <stdio.h>
/*
같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
  */
int main(void) {

  int i, j, k;
  scanf("%d %d %d", &i, &j, &k);

  if (i == j && j == k) {
    printf("%d", 10000 + i * 1000);
  } else if (i == j || j == k || i == k) {
    if (i == j) {
      printf("%d", 1000 + i * 100);
    } else if (j == k) {
      printf("%d", 1000 + j * 100);
    } else if (i == k) {
      printf("%d", 1000 + k * 100);
    }
  } else if (i != j && j != k && i != k) {
    if (i > j && i > k) {
      printf("%d", i * 100);
    } else if (j > i && j > k) {
      printf("%d", j * 100);
    } else if (k > i && k > j) {
      printf("%d", k * 100);
    }
  }

  return 0;
}