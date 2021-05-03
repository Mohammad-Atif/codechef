#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,i,n,w,w_r,tmp,flag;
    vector<int> weights;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n>>w>>w_r;
        w-=w_r;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            weights.push_back(tmp);
        }
        if(w<=0)
        {
            cout<<"YES"<<endl;
        }
        else{
            sort(weights.begin(),weights.end());
            i=0;
            flag=0;
            while(i<n-1)
            {
                if(weights[i]==weights[i+1])
                {
                    w-=(weights[i]*2);
                    i+=2;
                }
                else
                i++;
                if(w<=0)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                }
            }
            if(flag==0)
            cout<<"NO"<<endl;
        

    }
        
    }
    return 0;
}