#include <stdio.h>
#include <string.h>

//S1mpl34uth3nt1c4t1on

int CheckUsername(char* input1)
{
    if(strlen(input1) < 8)
    {
        return 1;
    }
    return 0;
}

int CheckPassword(char* input1)
{
    char* enc = "\x53\x30\x6f\x73\x68\x36\x32\x72\x7c\x61\x39\x65\x78\x3c\x6d\x3b\x64\x20\x7d\x7d";
    int k = 0;

    if(strlen(input1) != strlen(enc))
    {
        return k = 1;
    }

    for(int i = 0; enc[i] != 0; i++)
    {
        k |= input1[i] ^ (enc[i] ^ i);
    }
    return k;
}

int main(int argc, char *argv[]) 
{   
    if(argc < 3)
    {
        printf("usage <username> <password>\n");
        return 1;
    }

    if(CheckUsername(argv[1]) != 0) 
    {
        printf("Wrong Username\n");
        return 1;
    }

    if(CheckPassword(argv[2]) == 0)
    {
        printf("Correct, ICTF{%s}\n", argv[2]);
    }
    else
    {
        printf("Wrong Password\n");
    }

    return 0;
}

