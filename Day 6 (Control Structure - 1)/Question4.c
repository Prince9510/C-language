#include<stdio.h>

main(){
    int num1;


    printf("Enter Your Age Number : ");
    scanf("%d",&num1);


    
  if(num1 == 18){
    printf("You Can Also Vote");
  }else if (num1 < 18)
  {
    printf("You can Not Vote");
  }else{
    printf("You Can Vote");
  }
  
   
}