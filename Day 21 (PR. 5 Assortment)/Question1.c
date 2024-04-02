#include<stdio.h>

main(){

    int size;

    printf("Enter the array's size : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i <= size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the array's size : ");
    for (int i = 0; i <= size; i++)
    {
        
        if (arr[i] < 0)
        {
            printf("%d ",arr[i]);
        }
    }
    
    

}