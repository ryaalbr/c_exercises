#include <stdio.h>

float c_to_f(int c) {
	return (9.0/5.0 * c) + 32.0;
} 

int main() {
	float celsius;
	float lower, upper, step;
	
	lower = -20;
	upper = 150;
	step = 10;
	
	celsius = lower;
	printf("Celsius Fahrenheit\n");
	for (celsius = upper; celsius > lower; celsius -= step) {
		printf("%7.0f %10.1f\n", celsius, c_to_f(celsius));
	}
	return 0;
}
