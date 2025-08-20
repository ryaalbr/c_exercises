#include <stdio.h>

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		if (c=='\n') {
			break;
		}
		if ((c=getchar()) == EOF) {
			break;
		}
		s[i] = c; 
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
