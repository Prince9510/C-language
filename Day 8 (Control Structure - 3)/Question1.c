#include<stdio.h>

int main(){

    int num1,num2,num3;

    printf("Enter First Your Values : ");
    scanf("%d",&num1);

    printf("Enter Second Your Values : ");
    scanf("%d",&num2);

    printf("Enter Third Your Values : ");
    scanf("%d",&num3);

    (num1 < num2) ? (num1 < num3) ? printf("The minimum value is : %d",num1) : printf("The minimum value is : %d",num3) : printf("The minimum value is : %d",num2);

    return 0;
}