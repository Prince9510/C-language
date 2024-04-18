#include <stdio.h>

main() {
    int size;
    int min;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size]; 

    for (int i = 0; i < size; i++) {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is : %d\n", min);

}
