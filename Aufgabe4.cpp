#include "stdio.h"

int pot(int* a, int b) {
    if (b == 1) return *a;
    return pot(a, b - 1) * *a;
}


int main() {

    int a = 0, b = 0;
    printf("A: ");
    scanf_s("%d", &a);
    printf("B: ");
    scanf_s("%d", &b);
    printf("\n%d", pot(&a, b));

    return -1;
}
