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
    like that `COMMAND = FUNCTION`.
    In this example, `COMMAND` is the
    binary digits and `FUNCTION` is
    the operation's function.
    */
    NULL = 00000000; // Change the `00000000` with your null command.
} MY_ISA; // Your ISA's name.

int main()
{
    const char *filename = "my_file"; // Replace `my_file` with your file's name.

    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        return 1;
    }

    const int size = 1024; // Your file's max size.
    MY_ISA buffer[size + 1] = {NULL};
    
    fread(buffer, sizeof(MY_ISA), size, filename); // Replace `MY_ISA` with yours.
    
    int i = 0;
    while(i != size)
    {
        
    }
    
    fclose(filename);
    return 0;
}
