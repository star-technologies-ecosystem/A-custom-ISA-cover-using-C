/*
WARNING: This code is under
development.
*/

// Libraries
#include <stdio.h>

// Functions prototypes
/*
Put all your functions' prototypes here
so you can use them while defining
the ISA.
*/

// ISA
/*
Define your valid commands like that:
`#define COMMAND FUNCTION`, where
`COMMAND` is your binary code and
`FUNCTION` is the operation's C
function.
*/

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
