#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    if (T >= 1 && T <= 100) {
        while (T--) {
            int X;
            scanf("%d", &X); 

            if (X >= 1 && X <= 100) {
                if (X <= 10) {
                    printf("YES"); 
                } else {
                    printf("NO"); 
                }
            }
        }
    }

    return 0;
}