// WAP to delete a specific line from a file
#include <stdio.h>
#include <stdlib.h>

int main(){

    char path[100], s;
    int del, line = 1;
    FILE * rptr, * wptr;

    printf("Enter path of file: ");
    scanf("%s", path);

    rptr = fopen(path, "r");
    wptr = fopen("deleted.txt", "w");

    printf("Enter line number to be deleted: ");
    scanf("%d", &del);

    s = fgetc(rptr);
    line = 1;
    while ( s != EOF)
    {   
        if (s == '\n')
            line++;
            
        if(line != del)
            putc(s, wptr);

        s = fgetc(rptr);
    }
    
    fclose(rptr);
    fclose(wptr);
    
    return 0;
}