#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m = 1000000007,i,n,q,sum=0,tmp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        sum=(sum+tmp)%m;
    }
    cin>>q;
     for(i=0;i<n;i++)
    {
        cin>>tmp;
    }
    cout<<sum<<endl;
    for(i=0;i<q-1;i++)
    {
        sum=(sum*2)%m;
        cout<<sum<<endl;
    }

    return 0;
}