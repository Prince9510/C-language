#include <stdio.h> 
  
main() 
{ 
  
    for (int i = 0; i < 4; i++) { 
  
        for (int j = 0; j < 2 * (4 - i) - 1; j++) { 
            printf(" ");
        }
  
        for (int k = 0; k < 2 * i + 1; k++) { 
            if (k == 0 || k == 2 * i || i == 4 - 1) { 
                printf("* "); 
            } 
            else { 
                printf("  ");
            } 
        } 
        printf("\n"); 
    } 
}


