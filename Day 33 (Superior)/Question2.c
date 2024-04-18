#include <stdio.h>

main() {
    int size;
    int max;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size]; 


    for (int i = 0; i < size; i++) {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is : %d\n", max);

}
