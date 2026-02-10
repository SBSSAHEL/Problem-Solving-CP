// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     string s,x;

//     for (int  i = 0; i < t; i++)
//     {

//         cin >> s >> x;

//     }

//     s.replace(x,"#");

//     for (int  i = 0; i < t; i++)
//     {

//         cout << s << x;

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        string stns, t_str;

        cin >> stns >> t_str;

        while (stns.find(t_str) != string::npos)
        {
            stns.replace(stns.find(t_str), t_str.size(), "#");
        }
        cout << stns << endl;
    }
    return 0;
}