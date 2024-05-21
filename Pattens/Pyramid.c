#include <stdio.h>

void printInvertedPyramid(int size) {
    int space = 0;
    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        space++;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printInvertedPyramid(size);
    return 0;
}
