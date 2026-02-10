/*You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

Note: Index starts from 0.*/


#include<stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    int x,v;

    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d %d",&x,&v);
    a[x]=v;

    for (int i =n-1; i >=0; i--)
    {
       
        printf("%d ",a[i]);
        
    }
    return 0;
}