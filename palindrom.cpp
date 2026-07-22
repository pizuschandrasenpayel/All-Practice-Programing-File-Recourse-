#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,remainder,reverse = 0,n1;
    cin>>n;
    n1 = n;
    while(n!=0)
    {
        remainder = n %10 ;
        reverse = reverse *10 + remainder; 
        n = n/10;
    }
    cout<<reverse<<endl;
    if (n1 == reverse)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<" not Palindrome"<<endl;
    }
    return 0;
}