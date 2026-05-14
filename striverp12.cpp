#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m;
    int n;
    cout << "enter the value of row" << endl;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j==i)
            { for(m=i; m<=2*n-i; m++)
                {cout << "*";}
            }   
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}