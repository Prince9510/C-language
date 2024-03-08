#include<stdio.h>

main(){
    int num1;


    printf("Enter Your First Number : ");
    scanf("%d",&num1);

    if(num1 % 2 == 0){
        printf("%d is an even number",num1);

    }else{
        printf("%d is an odd number",num1);
    }
    

   
}