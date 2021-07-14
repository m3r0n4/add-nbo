// file.cpp

#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void read_file(char *filename1, uint32_t *buf)
{
    FILE *fp1 = fopen(filename1, "r");
    if (fp1 == NULL)
    {
        fputs("File error", stderr);
        exit(1);
    }

    fread(buf, 4, 1, fp1);
    fclose(fp1);
}