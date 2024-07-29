#include <stdio.h>

int main() {
	int i=1, n;
	unsigned char s[4] = "가";

	scanf("%d", &n);

	while (i++-n) {
		s[2]++;

		if (s[2] == 0xc0)
        {
            s[2]=0x80;
            s[1]++;
        }
		if (s[1] == 0xc0)
        {
            s[1]=0x80;
            s[0]++;
        }
	}
    
	printf("%s", s);

	return 0;
}