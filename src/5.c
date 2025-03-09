#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int y = 10;
    printf("The sum of %d and %d is %d", x, y, add(x, y));
    return 0;
}

int add(int a, int b) {
    return a + b;
}
