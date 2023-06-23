#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter the string :");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        string[i]+=32;
    }
    printf("The string in lowercase is %s",string);
}
