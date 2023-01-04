#include "stdio.h"

long long convert(long long number) {
    if (number == 0) return 0;
    return (number % 2 + 10 * convert(number / 2));
}

int main() {

    int i = 0;
    scanf_s("%d", &i);
    printf("%d", convert(i));
    return -1;
}