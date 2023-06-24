#include<stdio.h>
int main()
{
    char string[10];
    printf("Enter the string: ");
    gets(string);
    int length=0;
    for(int i=0;string[i]!='\0';i++,length=i);
    for(int i=0;i<length-1;i++)
    {
        for(int j=i;j<length;j++)
        {
            if(string[i]>string[j])
            {
                char temp;
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("The sorted string is %s",string);
}