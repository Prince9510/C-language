#include<stdio.h>

main(){
   
   int number1,number2;

   printf("Enter the first number : ");
   scanf("%d",&number1);

   printf("Enter the second number : ");
   scanf("%d",&number2);


    while (number1 <= number2)
    {
        if (number1 % 4 == 0)
        {
            printf("%d ",number1);

        }
        number1++;
        
    }
    
   
    
   
    
}