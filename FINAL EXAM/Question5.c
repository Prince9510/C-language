#include <stdio.h>


swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

main() {
    int number1,number2;

    printf("Enter first value : ");
    scanf("%d",&number1);

    printf("Enter second value : ");
    scanf("%d",&number2);

    swap(&number1, &number2);

    printf("After swapping : \n");
    printf("number1 : %d\n",number1); 
    printf("number2 : %d",number2);

}
