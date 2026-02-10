// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", ar[i]); // reversing of array value
        }
    }

    return 0;
}