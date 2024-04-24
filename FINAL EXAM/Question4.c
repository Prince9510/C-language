#include<stdio.h>

main(){
    int leap;

    printf("Enter any year : ");
    scanf("%d",&leap);

    if (leap % 4 == 0)
    {
        /* code */
        printf("%d is leap year.",leap);
    }else{
        printf("%d is not leap year.",leap);
    }
    
}