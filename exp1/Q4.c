// WAP to copy contents of one file to another
#include <stdio.h>
#include <stdlib.h>

int main(){

    char path[100], s;
    FILE * rptr, * wptr;

    printf("Enter path of file: ");
    scanf("%s", path);

    rptr = fopen(path, "r");
    wptr = fopen("copy.txt", "w");


    s = fgetc(rptr);

    while ( s != EOF)
    {   
        putc(s, wptr);
        s = fgetc(rptr);
    }
    
    fclose(rptr);
    fclose(wptr);
    
    return 0;
}