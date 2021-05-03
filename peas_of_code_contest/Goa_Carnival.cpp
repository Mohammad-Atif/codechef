#include<bits/stdc++.h>
using namespace std;


int main()
{
    int stalls,total_money,tmp,candies=0,i=0,minn;
    vector<int> stall_cost;
    cin>>stalls>>total_money;
    for(int z=0;z<stalls;z++)
    {
        cin>>tmp;
        stall_cost.push_back(tmp);
    }

    minn=*min_element(stall_cost.begin(),stall_cost.end());


    while(total_money>=minn)
    {
        if(stall_cost[i]<=total_money)
        {
            total_money-=stall_cost[i];
            candies++;
        }
        i++;
        if(i>=stalls)
        i=0;
    }
    cout<<candies;

    return 0;
}
