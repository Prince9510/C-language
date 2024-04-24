#include <stdio.h>

main() {
    FILE *first;
    FILE *second;
    char word[100]; 

    
    first = fopen("frist.txt","r");
    if (first == NULL) {
        printf("Error opening frist file.\n");
    }

    second = fopen("second.txt","w");
    if (second == NULL) {
        printf("Error opening second file.\n");
        fclose(first);
    }

    fgets(word, sizeof(word),first);
    strupr(word);

    fprintf(second,"%s",word);

    printf("Sentence capitalized and written to second.txt successfully");

    fclose(first);
    fclose(second);

}
