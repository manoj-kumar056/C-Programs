#include <stdio.h>

void printSquare(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printSquare(size);
    return 0;
}
