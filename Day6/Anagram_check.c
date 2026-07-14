#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i,j,flag=1;

    printf("Enter First String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter Second String: ");
    fgets(str2, sizeof(str2), stdin);

    if(strlen(str1)!=strlen(str2))
        flag=0;

    for(i=0;str1[i]!='\0' && flag;i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                str2[j]='*';
                break;
            }
        }

        if(str2[j]=='\0')
            flag=0;
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
