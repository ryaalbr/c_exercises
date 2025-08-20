#include <stdio.h>

int main() {
    char name[50];
    printf("Hi! What is your name?\n");
    scanf("%s", name);  
    printf("Nice to meet you, ");
    printf("%s", name);
    printf(".");
}