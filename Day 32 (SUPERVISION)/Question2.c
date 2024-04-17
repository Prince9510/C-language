#include<stdio.h>

 struct student
    {
        int  car_id;
        char  car_company[100];
        int  car_model;
        char  car_color[100];
        char city[100];
        int  car_year;
        int car_price;
        int car_mileage;
    }s1[100];


main(){
    
    int n;
    printf("Enter stdent number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter car id : ");
        scanf("%d",&s1[i].car_id);
        
        printf("Enter car company : ");
        scanf("%s",&s1[i].car_company);

        printf("Enter car model : ");
        scanf("%d",&s1[i].car_model);

        printf("Enter car color : ");
        scanf("%s",&s1[i].car_color);

        printf("Enter car year : ");
        scanf("%d",&s1[i].car_year);

        printf("Enyter car price : ");
        scanf("%d",&s1[i].car_price);

         printf("Enyter car mileage : ");
        scanf("%d",&s1[i].car_mileage);

    }


    for (int i = 0; i < n; i++)
    {
        printf("car_id : %d\n",s1[i]. car_id);
        printf("car_company : %s\n",s1[i].car_company);
        printf("car_model : %d\n",s1[i].car_model);
        printf("car_color : %s\n",s1[i].car_color);
        printf("car_year : %d\n",s1[i].car_year);
        printf("car price : %d\n",s1[i].car_price);
        printf("car_mileage : %d\n",s1[i].car_mileage);




    }
    
    
    
}