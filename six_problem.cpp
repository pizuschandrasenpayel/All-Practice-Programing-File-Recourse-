#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k,sum=0,l=1,mul;
    cin >> n;
    l = 1;
    for(i=1;i<=n;i++)      /// for nth term
    {
        for(j=1;j<=i;j++)  /// for sum operation
        {
            //cout<<"(";
            mul = 1;
            for(k=1;k<=j;k++) /// for muliplication
            {
                /*
                if (k==j)
                    cout<<l;
                else
                    cout<<l<<"*";
                l++;
                */
                mul = mul * l;
                l++;
            }
            sum = sum + mul;
            //cout<<")"<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}