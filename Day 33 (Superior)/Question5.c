#include<stdio.h>
main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number : ",i);
        scanf("%d",&arr[i]);        
    }

    for (int i = size-1; i >= 0; i--)
    {
        printf("%d  \n",arr[i]);
    }
    
}