#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    int m, a, b, c;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int sum = (a * b * c);

        if (sum == 0)
        {
            printf("0\n");
        }

        if (m % sum == 0)
        {
            int x = m / sum;
            printf("%d\n", x);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}