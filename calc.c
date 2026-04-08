#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, answer;
    printf("Enter first number:\n");
    scanf("%lf", &a);

    printf("Enter second number:\n");
    scanf("%lf", &b);

    answer = a + b;
    printf("Answer: %lf", answer);

    return 0;
}