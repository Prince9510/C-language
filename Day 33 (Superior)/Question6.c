#include<stdio.h>
int input(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
}
main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr1[size];
    input(arr1,size);

    printf("\n");

    int arr2[size];
    input(arr2,size);

    printf("\n");
    int combined_size = size+size;
    int combined[combined_size];

    for (int i = 0; i < combined_size; i++)
    {
        combined[i] = arr1[i];
    }
    for (int i = 0; i < combined_size; i++)
    {
        combined[size+i] = arr2[i];
    }
    printf("The combinedd array is: ");
    for (int i = 0; i < combined_size; i++)
    {
        printf("%d ",combined[i]);
    }
    
}