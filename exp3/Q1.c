// WAP to identify all types of comments
#include <stdio.h>
#include <string.h>

FILE *fp, *fp2;

void check_comment(char c)
{
    char d;
    if (c == '/')
        if ((d = fgetc(fp)) == '*')
            block_comment();
        else if ((d = fgetc(fp)) == '/')
            single_comment();
}

int main()
{

    char c;
    fp = fopen("code.txt", "r");
    fp2 = fopen("comments.txt", "w");
    while ((c = fgetc(fp)) != EOF)
    {
        check_comment(c);
    }

    fclose(fp);
    fclose(fp2);

    return 0;
}
