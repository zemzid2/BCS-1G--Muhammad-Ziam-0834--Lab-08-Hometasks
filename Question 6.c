#include <stdio.h>
int main() {
    int n = 5;
    int i, j, k;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("   |   ");
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("   |   ");
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }

    return 0;
}
