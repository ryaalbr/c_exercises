#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

	char var_names[8][15] = {"signed char", "signed short", "signed long", "signed int", "unsigned char", "unsigned short", "unsigned long", "unsigned int"};
	long min_values[8] = {SCHAR_MIN, SHRT_MIN, LONG_MIN, INT_MIN, 0, 0, 0, 0};
	unsigned long int max_values[8] = {SCHAR_MAX, SHRT_MAX, LONG_MAX, INT_MAX, UCHAR_MAX, USHRT_MAX, ULONG_MAX, UINT_MAX};
	
	int n = *(&min_values + 1) - min_values;
	int i;	
	
	for (i = 0; i < n; i++) {
		printf("Range of ");
		printf("%s", var_names[i]);
		printf(": ");
		printf("%ld", min_values[i]);
		printf(" - ");
		printf("%lu", max_values[i]); 	
		printf("\n");
	}

	return 0;
}
