#include <stdio.h>

main() {
    int row;
    printf("Enter the array's row & column size: ");
    scanf("%d",&row);
    

    int arr[row][row];


    printf("Enter array's elements: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The transpose matrix of the array: \n");


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    
}
