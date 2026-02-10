#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[10005];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);

        int sm_count = 0, cap_count = 0, dt_count = 0;

        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                sm_count++;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                cap_count++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                dt_count++;
            }

        
        }
        printf("%d %d %d\n", cap_count, sm_count, dt_count);
    }

    

    return 0;
}