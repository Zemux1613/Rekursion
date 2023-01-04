#include "stdio.h"

int quad(int x) {
    if (x == 0) return 0;
    return (x - 1) + x + quad(x - 1);
}


int main() {

    int i = 0;
    scanf_s("%d", &i);
    printf("%d", quad(i));

    return -1;
}
