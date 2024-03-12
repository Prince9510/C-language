#include<stdio.h>

 main(){

    int num1,num2,num3,num4;

    printf("Enter a value of the first number : ");
    scanf("%d",&num1);

    printf("Enter a value of the second number : ");
    scanf("%d",&num2);

    printf("Enter a value of the third number : ");
    scanf("%d",&num3);

    printf("Enter a value of the forth number : ");
    scanf("%d",&num4);


        if (num1 > num2)
        {
            if (num1 > num3)
            {
                if (num1 > num4)
                {
                    printf("The maximum value is : %d",num1);
                }
                else{
                    if (num4 > num2)
                    {
                        /* code */
                        if (num4 > num3)
                        {
                            /* code */
                            printf("The maximum value is : %d",num4);
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                if (num3 > num2)
                {
                    /* code */
                    if (num3 > num4)
                    {
                        /* code */
                        printf("The maximum value is : %d",num3);
                    }
                    
                }
                
            }
            
            
        }
        else
        {
            if (num2 > num3)
            {
                if (num2 > num4)
                {
                   printf("The maximum value is : %d", num2);
                }else
                {
                    printf("The maximum value is : %d",num4);
                }
            }
            else
            {
                printf("The maximum value is : %d",num3);
            }   
        }    
}