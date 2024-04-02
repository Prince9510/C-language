#include <stdio.h>
main()
{

    int size;
    printf("Enter the array's size: ");
    scanf("%d",&size);
    int arr[size][size];

    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int rownumber,rowsum = 0;
    printf("Enter the row number: ");
    scanf("%d",&rownumber);

    for (int j = 0; j <= size; j++)
    {
        printf("Elements of row : %d\n",arr[rownumber][j]);
    }
    for (int j = 0; j <= size; j++)
    {
        rowsum += arr[rownumber][j];
    }
    printf("The sum of a row : %d\n",rowsum);

    int colnumber,colsum = 0;
    printf("Enter the column number: ");
    scanf("%d",&colnumber);

    for (int j = 0; j <= size; j++)
    {
        printf("Elements of column %d\n",arr[j][colnumber]);
    }
    for (int j = 0; j <= size; j++)
    {
        colsum += arr[j][colnumber];
    }
    printf("The sum of a column : %d\n",colsum);

}