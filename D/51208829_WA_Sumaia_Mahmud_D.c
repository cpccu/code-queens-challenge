#include <stdio.h>

int main() {
    int X, finalRent;

    printf("Enter the initial rent paid by Chef: ");
    scanf("%d", &X);

    finalRent = 2 * X;

    printf("The final rent Chef needs to pay: %d\n", finalRent);

    return 0;
}