#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int invest;

        if (X > Y) {
            invest = X - Y;
        } else {
            invest = 0;
        }

        printf("%d", invest);
    }

    return 0;
}