#include<stdio.h>
#include<string.h>

int is_palindrome(char s[])
{
    int len = strlen (s);
    int pal = 1;

    for (int i = 0, j= len-1; i < j; i++,j--)
    {
        if (s[i] != s[j])
        {
            pal = 0;
            break;
        }
        
    }
    return pal;
    
}

int main() 
{
    char s[1005];
    scanf("%s", s);
    
    int pal= is_palindrome(s);

    if (pal == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    
    return 0;
}