#include<stdio.h>

swap(int *n1 ,int *n2 ,int *n3){
    
    int *temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = *n3;
    *n3 = temp;

    printf("First Value is : %d\n",*n2);
    printf("Second Value is : %d\n",*n1);
    printf("Thrid Value is : %d\n",*n3);
       
}

main(){
    int *number1 , *number2 , *number3;

    printf("Enter First Number : ");
    scanf("%d",&number1);

     printf("Enter Second Number : ");
    scanf("%d",&number2);

     printf("Enter Third Number : ");
    scanf("%d",&number3);

    swap(&number1,&number2,&number3);
}
    
