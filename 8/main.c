#include <stdio.h>

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float divide(float a, float b) {
    if (a != 0 || b!=0) {
        return a / b;
    } else {
        return 0;
    }
}
float multiply(float a, float b) {
    return a * b;
}

int main() {
    float x, y; char c;
    scanf ("%f %f\n", &x, &y);
    scanf("%c", &c);
    if (c == '+') {
        printf ("%.2f\n", add(x, y));
    } else if (c == '-') {
        printf ("%.2f\n", sub(x, y));
    } else if (c == '*') {
        printf ("%.2f\n", multiply(x, y));
    } else if (c == '/') {
        printf ("%.210f\n", divide(x, y));
    } else {
        printf("not a valid operator");
    }
    return 0;
}