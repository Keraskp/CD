// WAP to scan and count the no. of characters, words and lines in a file
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s, path[100];
    int characters, words, lines;
    characters = words = lines = 0;

    FILE *fptr;
    printf("Enter path of file: ");
    scanf("%s", path);

    fptr = fopen(path, "r");

    if (fptr == NULL)
    {
        printf("File can't be opened\n");
        exit(EXIT_FAILURE);
    }

    s = fgetc(fptr);

    while (s != EOF)
    {

        characters++;

        if (s == '\n' || s == '\0')
            lines++;

        if (s == ' ' || s == '\t' || s == '\n' || s == '\0')
            words++;

        s = fgetc(fptr);
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    fclose(fptr);

    return 0;
}