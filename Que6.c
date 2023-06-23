#include<stdio.h>
int main()
{
    char string[100],length;
    printf("Enter the string :");
    scanf("%s",string);
    for(length=0;string[length]!='\0';length++);
    for(int i=0;i<(length/2);i++)
    {
        char temp;
        temp=string[i];
        string[i]=string[length-i-1];
        string[length-i-1]=temp;
    }
    printf("The reverse string is %s",string);
}
