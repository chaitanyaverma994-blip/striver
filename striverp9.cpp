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
            if(j==n-i+1)
            { for(m=n-i+1; m<=n+i-1; m++)
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