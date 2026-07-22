//Binary,octal,hexa decimal to Dacimal:

#include<bits/stdc++.h>
using namespace std;
int main()
{
int numsystem , decimal = 0, i =0,rem , base;

    cin>>numsystem>>base;

    while(numsystem !=0)
    {
       rem = numsystem % 10;
       decimal = decimal + (rem * pow(base,i));
       numsystem = numsystem / 10;
         i = i + 1;
    }
    
        cout<<decimal;
    
    return 0;
}