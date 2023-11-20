#include <stdio.h>
int main()
{
    char str[1000];
    int i,l=0;    
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    l++; 
    printf("\nLength of string is: %d",l);
    return 0;
}
