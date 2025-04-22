#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

void printComplex(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main() {
    struct Complex num1 = {3.0, 4.0};
    struct Complex num2 = {2.0, -1.0};

    printf("Number 1: ");
    printComplex(num1);
    printf("Number 2: ");
    printComplex(num2);

    printf("\nAddition: ");
    printComplex(addComplex(num1, num2));

    printf("Subtraction: ");
    printComplex(subtractComplex(num1, num2));

    printf("Multiplication: ");
    printComplex(multiplyComplex(num1, num2));

    return 0;
}