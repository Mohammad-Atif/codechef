#include<bits/stdc++.h>
using namespace std;


void calculate(int x,int a,int b)
{
    int ans= (a+((100-x)*b))*10;
    cout<<ans<<endl;
}

int main()
{
    int cases,x,a,b;
    cin>>cases;
    while(cases--)
    {
        cin>>x>>a>>b;
        calculate(x,a,b);
    }
    return 0;
}