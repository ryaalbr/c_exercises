#include <stdio.h>

#define TAB_LENGTH 4

int main() {
	char c;
	int i;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i < TAB_LENGTH; i++) {
				printf(" ");
			}
		} else {
			printf("%c", c);
		}
	}
	return 0;	
}
