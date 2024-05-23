#include <stdio.h>

void printRightTriangle(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printRightTriangle(size);
    return 0;
}
