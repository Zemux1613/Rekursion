#include "stdio.h"

int collatz(int x) {
    printf("\nCollatz input: %d", x);
    if (x == 1) return 1;
    if (x % 2 == 0) {
        printf("\ncollatz(%d/2)", x);
        return collatz(x / 2);
    }else {
        printf("\ncollatz((%d*3+1)/2))", x);
        return collatz((3 * x + 1) / 2);
    }
}

int main() {

    int i = 0;
    scanf_s("%d", &i);
    printf("%d", collatz(i));
    return -1;
}