#include <stdio.h>

int main(){

    int m, n;
    int sum[1000000];
    int t;
  
    scanf("%d", &t);
  
    for(int i = 0; i < t; i++){
      scanf("%d %d", &m, &n);
      sum[i] = m+n;
    }
  
  for(int j = 0; j < t; j++){
    printf("%d\n", sum[j]);
  }

  


}