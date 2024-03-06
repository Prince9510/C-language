#include<stdio.h>

main (){
    int principal;
    int rate;
    int time;
    int ans;

    printf("Enter Value Of Principal :");
    scanf("%d",&principal);

    printf("Enter Value Of Rate :");
    scanf("%d",&rate);

   
    printf("Enter Value Of Time :");
    scanf("%d",&time);


    ans = principal * rate * time / 100;

    printf("Your Answer Is : %d",ans);



   
}