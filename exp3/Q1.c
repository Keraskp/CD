// WAP to identify all types of comments
#include <stdio.h>
#include <string.h>

FILE *fp, *fp2;

void single_comment();
void block_comment();
void check_comment(char c);

void check_comment(char c)
{
    char d;
    if (c == '/')
        d = fgetc(fp);
        if (d == '*')
            block_comment();
        else if (d == '/')
            single_comment();
}
/* */
void block_comment(){
    fputc('/', fp2);
    fputc('*', fp2);
    char c, d;
    while((c = fgetc(fp))!=EOF){
        if(c == '*'){
            d = fgetc(fp);
            if(d == '/'){
                fputc('*', fp2);
                fputc('/', fp2);
                return;
            }
        }
        fputc(c, fp2);
    }

}

void single_comment(){

    char c;
    fputc('/', fp2);
    fputc('/', fp2);
    while((c = fgetc(fp)) != '\n'){
        fputc(c, fp2);
    }

    fputc('\n', fp2);
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
