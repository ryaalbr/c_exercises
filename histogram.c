#include <stdio.h>

int main() {
	int c, i, nother;
	int ncharacter[52];
	
	nother = 0;
	for (i = 0; i < 52; i++) {
		ncharacter[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z'){
 			ncharacter[c-'A']+=1;
		} else if (c >= 'a' && c <= 'z') {
			ncharacter[c-'a'+26]+=1;
		} else {
			nother += 1;
		}
	}
	
	printf("Digits =");
	for (i = 0; i < 52; i++) {
		printf(" %d", ncharacter[i]);
	}
	printf(", other = %d\n", nother);
}
