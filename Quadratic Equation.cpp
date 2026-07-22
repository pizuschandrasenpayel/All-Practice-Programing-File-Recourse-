#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,x,x1,x2;

    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    cout<<"Enter c:";
    cin>>c;

    d = pow(b,2)-4*a*c;

    if(d==0)
    {
        x = -b/(2*a);
        cout<<"The Roots are Equal and Real:"<<x<<endl;
    }
    else if(d>0)
    {
        x1 = -b + sqrt(d)/(2*a);
        x2 = -b - sqrt(d)/(2*a);

        cout<<"The Roots are not Equal and Real:"<<x1<<x2<<endl;
    }
    else
    {
        cout<<"The Roots are imeginare"<<endl;
    }
    

}