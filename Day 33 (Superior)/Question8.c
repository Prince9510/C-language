#include<stdio.h>
main(){
    int frist_array_size;
    printf("Enter the first arrays size: ");
    scanf("%d",&frist_array_size);

    int arr1[frist_array_size];
    for (int i = 0; i < frist_array_size; i++){
        printf("Enter the numbers; ");
        scanf("%d",&arr1[i]);
    }
    int second_array_size;
    printf("Enter the first arrays size: ");
    scanf("%d",&second_array_size);

    int arr2[second_array_size];
    for (int i = 0; i < second_array_size; i++){
        printf("Enter the numbers; ");
        scanf("%d",&arr2[i]);
    }
    

    for (int i = 0; i < frist_array_size; i++){
        for (int j = 0; j < second_array_size; j++){
            if (arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
            
        }
        
    }
    
}