#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    if (T >= 1 && T <= 100) {
        while (T--) {
            int X, Y;
            scanf("%d %d", &X, &Y);

            if (Y >= 1 && X > Y && X <= 100 && Y < X) {
                int investment = 0; 

                if (X > Y) {
                    investment = X - Y; 
                }

                printf("%d\n", investment); 
            }
        }
    }

    return 0;
}