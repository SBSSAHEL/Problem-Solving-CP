#include<stdio.h>
#include<string.h>

int main() 
{
    char s[10000005];
    scanf("%s", s);
    

    int con=0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
    {
        
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            con++;
        }
        
    }
    printf("%d",con);
    return 0;
}