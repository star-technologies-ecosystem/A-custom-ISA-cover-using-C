/*
WARNING: This code is under
development.
*/

// Libraries
#include <stdio.h>

// ISA
typedef enum{
    /*
    Put your ISA valid commands
    like that `NAME = VALUE`.
    In this example, `NAME` is the
    name of the operation or
    command and `VALUE` is the binary
    digits.
    NOTICE: You must keep the NULL.
    */
    NULL = NULL;
} MY_ISA;

int main()
{
    const char *filename = "my_file";
    /*
    Replace `my_file` with your file
    name.
    */

    FILE *fp = fopen(filename, "r");
    /*
    Replace `my_file` with the name
    of your file.
    */

    if(fp == NULL)
    {
        return 1;
    }

    const int size = 1024;
    /*
    Replace the number `1024` with
    your max file size.
    */
  
    MY_ISA buffer[size] = {NULL};

    fread(buffer, 1, size, filename);

    /*
    The code in this zone will be
    finished soon...
    */
  
    fclose(filename);
}
