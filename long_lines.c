#include <stdio.h>
#define MAXLINE 1000 

 /* getline: read a line into s, return length */
int get_line(char s[],int lim) {
 	int c, i;
 	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
 	s[i] = c;
 	if (c == '\n') {
 		s[i] = c;
		i++;
 	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
 	int i;
 	i = 0;
 	while ((to[i] = from[i]) != '\0') {
 		i++;
	}
}

int main() {
	int len = 10;
	char line[MAXLINE];
	char very_long[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len >= 10) {
			copy(very_long, line);
			printf(very_long);						
		}
	}
	return 0;	
}
