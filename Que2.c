#include<stdio.h>
int main()
{
    char given,string[100],flag;
    printf("Enter the character :");
    scanf("%c",&given);
    printf("Enter the string :");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        if(given==string[i]||given==(string[i]+32)||given==(string[i]-32))
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("The given character is present in the string");
    else
        printf("The given character is not present in the string");
}