// WAP to read names and marks and store them in another file
#include <stdio.h>
#include <stdlib.h>

int main(){
    int marks; 
    char names[50];

    FILE * fptr;
    fptr = fopen("student.txt", "w"); // creates a file automatically

    if (fptr == NULL){
        printf("File not found!");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i<3; i++){
        printf("Enter name: ");
        scanf("%s", names);

        printf("Enter marks: ");
        scanf("%d", &marks);
        
        fprintf(fptr, "\nName: %s\t Marks: %d", names, marks);
    }

    fclose(fptr);
    return 0;
}