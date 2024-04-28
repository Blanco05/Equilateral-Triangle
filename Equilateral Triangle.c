#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int l, i, j;
    printf("Enter the side length of the triangle: ");
    scanf("%d", &l);

    for (i = 0; i < l; i++) {
        for (j = 0; j < 2 * l - 1; j++) {
            if (j >= l - i - 1 && j <= l + i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
