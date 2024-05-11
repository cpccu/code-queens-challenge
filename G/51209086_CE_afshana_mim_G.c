include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    if (T >= 1 && T <= 10000) {
        while (T--) {
            int X, Y;
            scanf("%d %d", &X, &Y);

            if (X >= 1 && X <= 100 && Y >= 1 && Y <= 100) {
                int total_cost = X * Y;
                printf("%d\n", total_cost);
            }
        }
    }

    return 0;
}