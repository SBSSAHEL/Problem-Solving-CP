#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,mul,sub;
    int x,y;
    cin >>x >>y;
    sum = x+y;
    mul = x*y;
    sub = x-y;
    cout << x <<' + ' << y << ' = ' << sum <<endl;
    cout << x <<' * ' << y << ' = ' << mul <<endl;
    cout << x <<' - ' << y << ' = ' << sub <<endl;
    return 0;
}