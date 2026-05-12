#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,j;
    int n;
    cout << "enter the value of no of rows and cols" << endl;
    cin >> n;
    cout << "the result is" << endl;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
           cout << j;
        }
        cout << endl;
    }
}