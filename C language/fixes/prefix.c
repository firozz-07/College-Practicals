#include <stdio.h>

int main(void) {
    char ch, op;

    printf("Enter variable (single character): ");
    if (scanf(" %c", &ch) != 1) {
        fprintf(stderr, "Failed to read variable.\n");
        return 1;
    }

    printf("Enter operator (+ or -): ");
    if (scanf(" %c", &op) != 1) {
        fprintf(stderr, "Failed to read operator.\n");
        return 1;
    }

    if (op == '+') {
        printf("prefix: ++%c\n", ch);
    } else {
        printf("prefix: --%c\n", ch);
    }

    return 0;
}