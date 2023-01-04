#include "stdio.h"

int succ(int n) {
    if (n == 0) return 0;
    return ++n;
}


int main() {

    int i = 0;
    scanf_s("%d", &i);
    printf("%d" , succ(i));

    return -1;
}
