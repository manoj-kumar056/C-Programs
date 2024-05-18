#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalsTriangle(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printPascalsTriangle(size);
    return 0;
}
