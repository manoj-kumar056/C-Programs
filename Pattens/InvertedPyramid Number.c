#include <stdio.h>

void printInvertedPyramid(int size) {
    for (int i = size; i >= 1; i--) {
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
    printInvertedPyramid(size);
    return 0;
}
