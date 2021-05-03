#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int cases,n,a,b,i,sarthakA,anuradhaB,j,flag;
    string tmp,str="EQUINOX";
    cin>>cases;
    for(long long int z=0;z<cases;z++)
    {
        cin>>n>>a>>b;
        sarthakA=0;anuradhaB=0;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            if(find(str.begin(),str.end(),tmp[0])!=str.end())
            sarthakA+=a;
            else
            anuradhaB+=b;
        }
        if(sarthakA>anuradhaB)
        cout<<"SARTHAK"<<endl;
        else if(anuradhaB>sarthakA)
        cout<<"ANURADHA"<<endl;
        else
        cout<<"DRAW"<<endl;


    }
    return 0;
}