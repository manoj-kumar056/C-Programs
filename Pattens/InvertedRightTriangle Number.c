#include <stdio.h>

void printInvertedRightTriangle(int size) {
    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printInvertedRightTriangle(size);
    return 0;
}
