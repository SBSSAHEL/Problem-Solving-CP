// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    int sum1=0;
    int sum2=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            sum1 += ar[i];
            
        }
        if (ar[i] <0)
        {
            
            sum2 += ar[i];

        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}