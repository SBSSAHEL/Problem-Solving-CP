#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int fgv = 0; // flag variable

    if (r != c) // sq mtx
    {
       printf("NO\n");
       

    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i==j || i+j==r-1)   //main logic
            {
                if (a[i][j]!=1)
                {
                    fgv=1;
                    break;
                }
                
            }
            else if (a[i][j]==1)
            {
                fgv=1;
                break;
            }
            
        }
        
        
    }
    if (fgv==1)
        {
            printf("NO");
            
        }
    else
    {
    printf("YES");
    }

    return 0;
}