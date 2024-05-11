#include <stdio.h>

int main() {
    int points;

    printf("Enter Score to Check :");
    scanf("%d", &points);

    if (points >=20 ) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
