#include<stdio.h>

cube(int *multification){
    return *multification * *multification * *multification;
}

main(){
    int *number;

    printf("Enter any number : ");
    scanf("%d",&number);

    printf("%d",cube(&number));
}