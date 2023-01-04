#include "stdio.h"

int fac(int a) {
    if (a == 0) return 1;
    return fac(a - 1) * a;
}


int main() {

    int i = 0;
    scanf_s("%d", &i);
    printf("%d", fac(i));

    return -1;
}
