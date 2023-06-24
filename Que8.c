#include<stdio.h>
int main()
{
    char arr1[100],arr2[100],i;
    printf("Enter the string :");
    fgets(arr1,100,stdin); //take space as a input also
    //scanf("%s",arr1); 
    for( i=0;arr1[i]!='\0';i++)
    {
        arr2[i]=arr1[i];
    }
    // arr2[i]='\0'; if we use scanf then it is necessary to end word with \0(null) else it prints garbage also
    printf("The copied string into another array is %s",arr2);
}