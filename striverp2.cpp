#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,j;
    int n;
    cout << "enter the value of no of rows and cols" << endl;
    cin >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}