#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,T,N,a,b,c,d;
    i=1;
    cin>>T;
    while (i<=T)
    {
        cin>>N;
        a=0;
        d=0;
        while (a<=N)
        {
            b=0;
            while(b<=a)
            {
                c = a*a - b*b;  
                if (c==N)
                {
                    cout<<a<<" "<<b<<endl;
                    d=1;
                }
                //cout<<c<<endl;
                b=b+1;
            }
            if (d==1)
                break;
            a = a+1;
        }
        i=i+1; // i+=1 or i++
    }
    return 0;
}