#include<stdio.h>
#include <stdlib.h>
int main() 
{
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        int a_cpy[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            a_cpy[i]=a[i];
        }
        
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a_cpy[i]>a_cpy[j])
                {
                    int temp = a_cpy[i];
                    a_cpy[i] = a_cpy[j];
                    a_cpy[j] = temp;

                }
                
            }
            
        }
        
        int c[n];

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - a_cpy[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    
    return 0;
}