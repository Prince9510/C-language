#include<stdio.h>
main(){
   int arr[5];

for (int i = 0; i<5; i++)
{
    printf("Enter Array Value : ");
    scanf("%d",&arr[i]);
}
for (int i = 0; i <5; i++)
{
    if (arr[0] < arr[i])
    {
        arr[0]=arr[i];
    }
    
}
printf("%d\n",arr[0]);

}