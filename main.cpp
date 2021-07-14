// main.cpp

#include "file.h"
#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    uint32_t buf1, buf2;
    uint32_t num1, num2, result;
    
    read_file(argv[1], &buf1);
    read_file(argv[2], &buf2);

    num1 = ntohl(buf1);
    
    num2 = ntohl(buf2);

    result = num1 + num2;
    
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", num1, num1, num2, num2, result, result);
    return 0;
}