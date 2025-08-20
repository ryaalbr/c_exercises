#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	int bits_to_invert = ~(~(~0<<n)<<(p+1-n));
    return (x&bits_to_invert)|(~x&~bits_to_invert);
}

int main() {
	int num = 85;
	printf("%d", num);
	printf("%d", invert(num, 4, 3)); 
}
