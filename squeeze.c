#include <stdio.h>

void squeeze(char s1[], char s2[])
{
	int i, j, k, notin;
	
	for (i = j = 0; s1[i] != '\0'; i++) {
		notin = 1;
		for (k = 0; s2[k] != '\0'; k++) {
			if (s1[i] == s2[k]) {
				notin = 0;
				break;
			}
		}
		if (notin == 1) {
            s1[j++] = s1[i];
        }
	}
	s1[j] = '\0';
}

int main() {
	char t1[19]  = "this is a sentence";
	char t2[5]  = "aeiou";
	
	squeeze(t1, t2);
	printf("%s", t1);
}
