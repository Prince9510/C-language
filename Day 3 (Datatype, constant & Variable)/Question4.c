#include<stdio.h>

main() { 

    float radius;
    const float pi = 3.14;


    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    float ans = pi * radius * radius;

    printf("%f",ans);
}