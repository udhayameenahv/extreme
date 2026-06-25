#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


int iamnew(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}

void print_result(const char *operation, float result) {
    printf("%s Result: %.2f\n", operation, result);
}

int main() {
    int a = 20, b = 5;

    greet();

    print_result("Addition", add(a, b));
    print_result("Subtraction", subtract(a, b));
    print_result("Multiplication", multiply(a, b));
    print_result("Division", divide(a, b));

    return 0;
}