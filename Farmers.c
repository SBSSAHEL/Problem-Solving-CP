#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int D, f1, f2;
    int n_t;

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &f1, &f2, &D);

        n_t = (D * f1) / (f1 + f2);

        int r_day = D - n_t;

        printf("%d\n", r_day);
    }

    return 0;
}