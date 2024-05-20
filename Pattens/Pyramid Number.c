#include <stdio.h>

void printPyramid(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printPyramid(size);
    return 0;
}
