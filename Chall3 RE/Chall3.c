#include <stdio.h>
#include <string.h>

//LEET1337

int Leet_Pass(char* input)
{
    char obfuscated[14] = "C5D4OCSZPU20O";
    char key[14] = "\x01\x01\x00\x01\x01\x00\x01\x01\x00\x01\x01\x00\x01";

    if(strlen(input) != strlen(obfuscated)){ return 0;}

    int i = 0;
    do
    {
        if(input[i] != (obfuscated[i] - key[i]))
        {
            return 0;
        }
        i++;
    }while (obfuscated[i] != 0 && input[i] != 0);
    return 1;
}

int main(int argc, char** argv)
{
    
    if (argc != 2)
    {
        printf("Need 1 Argument.\n");
        return -1;
    }

    if(Leet_Pass(argv[1]))
    {
        printf("Yup, ICTF{%s}\n", argv[1]);
        return 0;
    }
    printf("Wrong, don't give up\n");
    return 1;
}
