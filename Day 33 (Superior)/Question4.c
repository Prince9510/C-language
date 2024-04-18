#include <stdio.h>
main()
{
    int size;
    int even=0; 
    int odd=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
   

    for (int i = 0; i < size; i++)
    {
        printf("Enter number: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    printf("The even numbers in the array is %d.\n",even);
    printf("The odd numbers in the array is %d.\n",odd);
}