#include <stdio.h>
#include <string.h>

//an addendum

int main() 
{
    char* flag = "\x47\x64\x6b\x6b\x6e\x56\x6e\x71\x6b\x63";
    char key[40];
    int k = 0;

    printf("Enter the password: ");
    scanf("%40s", key);

    if(strlen(key) != strlen(flag))
    {
        printf("Wrong\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        k |= (flag[i] + 1) ^ key[i];
    }
    
    if (k == 0)
    {
        printf("Correct, ");
        printf("ICTF{%s}\n", key);
    }
    else
    {
        printf("Wrong\n");
    }

    return 0;
}