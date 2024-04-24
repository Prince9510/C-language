#include <stdio.h>

main() {

    int n;

    printf("Enter row : ");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--) {
            printf("_ ");
        }

        for (int j = 0; j < i; j++) {
            printf("* ");
        }

        printf("\n");
    }

}