#include<stdio.h>

main(){

    int arr[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Vlaues Of Array : ");
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\n",arr[i]);
        }
        
        
    }
    
}