#include <stdio.h>

// ট্রি প্রিন্ট করার ফাংশন
void printTree(int n) 
{
    for (int i = 1; i <= n; i++)
    {
        // স্পেস প্রিন্ট করা
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        // ডট প্রিন্ট করা
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(".");
        }
        printf("\n");
    }
}

// ট্রাঙ্ক প্রিন্ট করার ফাংশন
void printTrunk(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(".");
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    // ট্রি এবং ট্রাঙ্ক প্রিন্ট করা
    printTree(n);
    printTrunk(n);

    return 0;
}
