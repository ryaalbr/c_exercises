#include <stdio.h>

int main() {
	float celsius;
	float lower, upper, step;
	
	lower = -20;
	upper = 150;
	step = 10;
	
	celsius = lower;
	printf("Celsius Fahrenheit\n");
	for (celsius = upper; celsius > lower; celsius -= step) {
		printf("%7.0f %10.1f\n", celsius, (9.0/5.0 * celsius) + 32.0);
	}
	return 0;
}
