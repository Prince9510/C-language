#include<stdio.h>

main(){
    int size;

    printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size];
    int sum = 0;


    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];


    }
    printf("sum of array is : %d",sum);
    
    
}