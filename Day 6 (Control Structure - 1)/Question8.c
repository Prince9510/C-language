#include<stdio.h>

main(){
    int mark;


    printf("Enter Your exam marks : ");
    scanf("%d",&mark);

    
    if (mark >= 90 && mark <= 100){
        printf("your Mark Is %d so Your Grade Is A",mark);
    }else if (mark >= 80 && mark <= 89)
    {
        printf("your Mark Is %d so Your Grade Is B",mark);
    }else if (mark >= 70 && mark <= 79)
    {
        printf("your Mark Is %d so Your Grade Is C",mark);
    }else if (mark >= 60 && mark <= 69)
    {
        printf("your Mark Is %d so Your Grade Is D",mark);
    }else{
        printf("your Mark Is %d so Your Grade Is F",mark);
    }
    
    
    
   
}