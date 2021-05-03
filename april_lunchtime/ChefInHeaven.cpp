#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int cases,l,i,flag,ones,zeros;
    string s;
    string::iterator it;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>l;
        cin>>s;
        flag=0;
        ones=0;
        zeros=0;
        it=s.end()-1;
       for(i=0;i<s.length();i++)
       {
           if(s[i]=='0')
           zeros++;
           else
           ones++;
           if(ones>zeros)
           {
               cout<<"YES"<<endl;
               flag=1;
           }
       }
        if(flag==0)
        cout<<"NO"<<endl;

    }
    return 0;
}