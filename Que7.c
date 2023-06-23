#include<stdio.h>
int main()
{
    char string[100],tdigit=0,talphabet=0,tspecial=0;
    printf("Enter the string :");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        if('a'<=string[i]&&string[i]<='z')
            talphabet++;
        else if('0'<=string[i]&&string[i]<='9')
                tdigit++;
                else 
                    tspecial++;
    }
    printf("The given string contain %d digits %d alphabets %d special characters",tdigit,talphabet,tspecial);
}