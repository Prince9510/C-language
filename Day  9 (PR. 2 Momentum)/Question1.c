#include<stdio.h>

 main(){
    int number;

    printf("Enter Your Number");
    scanf("%d",&number);

    (number % 2 == 0) ? printf("Number %d is Even",number) : printf("NUmber %d is odd",number);
}