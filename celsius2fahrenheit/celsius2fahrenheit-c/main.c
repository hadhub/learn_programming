#include <stdio.h>

float degrees_convertor(float x) {
    printf("[+] Celsius is equal to : %.1f\n", x);
    float fahrenheit_value = (x * 9.0 / 5.0) + 32.0;
    printf("[+] Fahrenheit is equal to : %.1f\n", fahrenheit_value); //%.1f -> show only 1 digits
}

int main() {
    float user_value = 0;
    printf("Enter degrees value : ");
    scanf("%f", &user_value);
    degrees_convertor(user_value);
    return 0;
}