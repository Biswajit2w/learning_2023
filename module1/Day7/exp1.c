#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Copy Operation
    FILE *fin, *fout;
    fin = fopen("read.txt", "r");
    fout = fopen("write.txt", "w+");
    if (NULL == fin)
    {
        printf("File doesnot exsist!!\n");
        return 2;
    }
    else
    {
        size_t maxlen = 100;
        char *ptr = (char *)calloc(maxlen, sizeof(char));
        //read content -fgets,getline,getc...
        //ssize_t getline(char **lineptr,size_t *n,FILE *stream)
        while ((fgets(&ptr, &maxlen, fin)) != -1)
        {
            fprintf(fout, "%s", ptr);
        }
        free(ptr);
    }
    fclose(fin);
    fclose(fout);
}

