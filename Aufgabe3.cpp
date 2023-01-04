#include "stdio.h"

int mal(int* a, int b) {
    if (b == 1) return *a;
    return mal(a, b - 1) + *a;
}


int main() {

    int a = 0, b = 0;
    printf("A: ");
    scanf_s("%d", &a);
    printf("B: ");
    scanf_s("%d", &b);
    printf("\n%d" , mal(&a,b));

    return -1;
}
