#include <stdio.h>

int main(){
    int w[3], h[3], width, height;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d %d", &w[i], &h[i]);
    }

    if(w[0] == w[1])
        width = w[2];
    else if(w[1] == w[2])
        width = w[0];
    else if(w[0] == w[2])
        width = w[1];

    if(h[0] == h[1])
        height = h[2];
    else if(h[1] == h[2])
        height = h[0];
    else if(h[0] == h[2])
        height = h[1];

    printf("%d %d", width, height);

    return 0;
}