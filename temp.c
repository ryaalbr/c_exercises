#include <stdio.h>

float c_to_f(float c) {
    return (c * 9 / 5) + 32;
}

float f_to_c(float f) {
    return (f - 32) * 5 / 9;
}

float c_to_k(float c) {
    return c + 273.15;
}

float k_to_c(float k) {
    return k - 273.15;
}

int main(){
    float celsius = 0;

    printf("Celsius: ");
    printf("%f", celsius);
    printf("\n");

    printf("Fahrenheit: ");
    printf("%f", c_to_f(celsius));
    printf("\n");

    printf("Kelvin: ");
    printf("%f", c_to_k(celsius));
    printf("\n");

    return 0;
}