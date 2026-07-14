#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    strupr(str);

    printf("Uppercase String = %s",str);

    return 0;
}
