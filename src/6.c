#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote at this time.\n");
    }

    return 0;
}
