#include <stdio.h>
#include <string.h>

//Useless obfuscation

void UpdateWord2(char* str)
{
    str[0] = '\x42';
    str[1] = '\x34';
    str[2] = '\x64';
    str[3] = '\x50';
    str[4] = '\x34';
    str[5] = '\x35';
    str[6] = '\x35';
    str[7] = '\x77';
    str[8] = '\x30';
    str[9] = '\x72';
    str[10] = '\x64';
    str[11] = '\x73';
}

int main()
{
    char pass2[12] = "\x41\x33\x63\x51\x35\x35\x35\x77\x30\x72\x64\x72";
    int i = 0;

    char key[20];
    printf("Enter the password: ");
    scanf("%20s", key);

    if(strlen(key) != 12)
    {
        printf("Wrong Password\n");
        return 1;
    }

    UpdateWord2(pass2);

    do
    {
        if(pass2[i] != key[i])
        {
            printf("Still Wrong\n");
            return 1;
        }
        i++;
    }while (pass2[i] != 0 && key[i] != 0);

    printf("Correct, ICTF{%s}\n",key);

    return 0;
}