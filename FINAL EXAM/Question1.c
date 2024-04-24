#include <stdio.h>

main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    int fact = 1;

   for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n",num,fact);

}
