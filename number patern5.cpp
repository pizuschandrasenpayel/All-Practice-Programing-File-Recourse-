#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<".";
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<j;
        }


        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<".";
        }
        cout<<"\n";

    
    }


    for(i=n-1; i>=1; i--)
{
    // বাম পাশে Dot
    for(j=1; j<=n-i; j++)
    {
        cout << ".";
    }

    // 1 থেকে i-1 পর্যন্ত
    for(j=1; j<=i-1; j++)
    {
        cout << j;
    }

    // i থেকে 1 পর্যন্ত
    for(j=i; j>=1; j--)
    {
        cout << j;
    }

    // ডান পাশে Dot
    for(j=1; j<=n-i; j++)
    {
        cout << ".";
    }

    cout << "\n";
}
  
    return 0;
 
}