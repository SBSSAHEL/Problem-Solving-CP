#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
    int roll;
    char section;
    int math_maarks;
    int cls;

};

int main()
{
  int n;
  cin >> n;
  Student tppr;
  for (int i = 0; i <n; i++)
  {
    Student tem;

    cin >> tem.roll >> tem.name >> tem.section >> tem.math_maarks >> tem.cls;


    if (i == 1)
    {
        tppr = tem;
    }

    else
    {
        if (tem.math_maarks > tppr.math_maarks)
        {
            tppr = tem;
        }
        else if (tem.math_maarks  == tppr.math_maarks)
        {
            if (tem.roll < tppr.roll)
            {
                tppr = tem ;
            }
            
        }
        
    }
    
    
  }
  cout << tppr.roll << " " << tppr.name << " " <<  tppr.section << " " << tppr.math_maarks << " " << tppr.cls << endl;
  
   
    return 0;
}