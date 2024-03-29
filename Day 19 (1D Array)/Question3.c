#include<stdio.h>

main(){
        int sum = 0;
    int arr[5] = {};

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Vlaues Of Array : ");
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i <= 4; i++)
    {
        sum += arr[i];



    }
        printf("%d\n",sum / 5);
    
}



//////////
