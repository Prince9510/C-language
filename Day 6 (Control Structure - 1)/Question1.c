#include<stdio.h>

main(){
    int num1;
    int num2;


    printf("Enter Your First Number : ");
    scanf("%d",&num1);


    
    printf("Enter Your Second Number : ");
    scanf("%d",&num2);

    if(num1 < num2){
        printf("The minimum value is : %d",num1);
    }else{
        printf("The minimum value is : %d",num2);
    }
}