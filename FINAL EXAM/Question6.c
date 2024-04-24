#include<stdio.h>

 struct movie
    {
        int movie_title[100];
        char movie_genre[100];
        char movie_language[100];
        
    }m1[100];


main(){
    
    int n;
    printf("Enter number of movies : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
       
        
        printf("Enter movie title : ");
        scanf("%s",&m1[i].movie_title);

        printf("Enter movie genre : ");
        scanf("%s",&m1[i].movie_genre);

        printf("Enter movie author : ");
        scanf("%s",&m1[i].movie_language);

      

    }


    for (int i = 0; i < n; i++)
    {
        printf("movie title : %s\n",m1[i].movie_title);
        printf("movie genre : %s\n",m1[i].movie_genre);
        printf("movie language : %s\n",m1[i].movie_language);
       
    }    
}