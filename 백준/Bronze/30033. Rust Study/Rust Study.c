#include <stdio.h>

int main(){
    int n, cnt=0;
    int plan[1000];
    int study[1000];

    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
        scanf("%d", &plan[i]);
    
    for(int j=0; j<n; j++)
        scanf("%d", &study[j]);

    
    for(int k=0; k<n; k++)
    {
        if(plan[k] <= study[k])
            cnt++;
    }

    printf("%d", cnt);
}